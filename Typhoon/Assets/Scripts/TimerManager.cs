using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityTemplateProjects
{
    public class TimerManager : MonoBehaviour
    {
        readonly Dictionary<Action, TimerHandle> timers = new Dictionary<Action, TimerHandle>();
        
        public void SetTimer(TimerHandle timerHandle)
        {
            timers[timerHandle.Delegate] = timerHandle;

            StartCoroutine(InvokeTimer(timerHandle));
        }

        public void SetTimer(Action @delegate, float repeatRate = float.Epsilon, float delay = float.Epsilon)
        {
            SetTimer(new TimerHandle(@delegate, repeatRate, delay));
        }

        public void ClearTimer(Action @delegate)
        {
            if (timers.ContainsKey(@delegate))
                timers.Remove(@delegate);
        }
        
        public void ClearTimer(TimerHandle timerHandle)
        {
            if (timers.ContainsKey(timerHandle.Delegate))
                timers.Remove(timerHandle.Delegate);
        }

        public bool IsTimerPaused(Action @delegate)
        {
            if (timers.ContainsKey(@delegate))
                return timers[@delegate].IsPaused;

            return false;
        }

        public bool IsTimerPresent(Action @delegate)
        {
            return timers.ContainsKey(@delegate);
        }
        
        public bool IsTimerPresent(TimerHandle timerHandle)
        {
            return timers.ContainsKey(timerHandle.Delegate);
        }

        public float GetTimerRate(Action @delegate)
        {
            if (timers.ContainsKey(@delegate))
                return timers[@delegate].RepeatRate;

            return -1;
        }

        private IEnumerator InvokeTimer(TimerHandle timer)
        {
            while (true)
            {
                // Stop when timer has been removed.
                if (!IsTimerPresent(timer))
                    break;
                
                // Wait until timer is not paused.
                yield return new WaitUntil(() => !timer.IsPaused);

                // Wait for delay.
                if (timer.TotalCalls == 0)
                    yield return new WaitForSeconds(timer.Delay);

                timer.Delegate.Invoke();
                timer.TotalCalls++;

                // If no repeating, remove timer.
                if (timer.RepeatRate <= float.Epsilon)
                {
                    ClearTimer(timer);
                    break;
                }

                // Wait for repeat rate.
                yield return new WaitForSeconds(timer.RepeatRate);
            }
        }
    }
}