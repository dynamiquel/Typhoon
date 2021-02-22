using System;

namespace UnityTemplateProjects
{
    public class TimerHandle
    {
        public Action Delegate { get; set; }
        public float RepeatRate { get; set; }
        public float Delay { get; set; }

        public bool IsPaused { get; set; }
        public uint TotalCalls { get; set; }

        public TimerHandle(Action @delegate, float repeatRate = float.Epsilon, float delay = float.Epsilon)
        {
            Delegate = @delegate;
            RepeatRate = repeatRate;
            Delay = delay;
        }
    }
}