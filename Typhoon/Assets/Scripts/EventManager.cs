using System;
using System.Collections.Generic;

namespace UnityTemplateProjects
{
    public class EventManager
    {
        Dictionary<string, List<object>> eventTable = new Dictionary<string, List<object>>();
        
        private List<object> GetActionList(string eventName)
        {
            List<object> actionList;
            if (eventTable.TryGetValue(eventName, out actionList)) {
                return actionList;
            }
            return null;
        }

        public void Destroy()
        {
            ClearTable();
        }

        /// <summary>
        /// Clears the actual events.
        /// </summary>
        void ClearTable()
        {
            eventTable.Clear();
        }
        

        #region AddListener
        
        void AddListener(string eventName, object invokableAction)
        {
            List<object> actionList;
            if (eventTable.TryGetValue(eventName, out actionList)) 
                actionList.Add(invokableAction);
            else 
            {
                actionList = new List<object>();
                actionList.Add(invokableAction);
                eventTable.Add(eventName, actionList);
            }
        }

        public void AddListener(string eventName, Action action) =>
            AddListener(eventName, action);
        
        public void AddListener<T1>(string eventName, Action<T1> action) =>
            AddListener(eventName, action);
        
        public void AddListener<T1, T2>(string eventName, Action<T1, T2> action) =>
            AddListener(eventName, action);
        
        public void AddListener<T1, T2, T3>(string eventName, Action<T1, T2, T3> action) =>
            AddListener(eventName, action);
        
        public void AddListener<T1, T2, T3, T4>(string eventName, Action<T1, T2, T3, T4> action) =>
            AddListener(eventName, action);
        
        public void AddListener<T1, T2, T3, T4, T5>(string eventName, Action<T1, T2, T3, T4, T5> action) =>
            AddListener(eventName, action);
        
        public void AddListener<T1, T2, T3, T4, T5, T6>(string eventName, Action<T1, T2, T3, T4, T5, T6> action) =>
            AddListener(eventName, action);

        #endregion


        #region Execute

        public void Execute(string eventName)
        {
            var actions = GetActionList(eventName);
            if (actions == null) 
                return;
            
            for (var i = actions.Count - 1; i >= 0; --i) {
                ((Action)actions[i])?.Invoke();
            }
        }
        
        public void Execute<T1>(string eventName, T1 arg1)
        {
            var actions = GetActionList(eventName);
            if (actions == null) 
                return;
            
            for (var i = actions.Count - 1; i >= 0; --i) {
                ((Action<T1>)actions[i])?.Invoke(arg1);
            }
        }
        
        public void Execute<T1, T2>(string eventName, T1 arg1, T2 arg2)
        {
            var actions = GetActionList(eventName);
            if (actions == null) 
                return;
            
            for (var i = actions.Count - 1; i >= 0; --i) {
                ((Action<T1, T2>)actions[i])?.Invoke(arg1, arg2);
            }
        }
        
        public void Execute<T1, T2, T3>(string eventName, T1 arg1, T2 arg2, T3 arg3)
        {
            var actions = GetActionList(eventName);
            if (actions == null) 
                return;
            
            for (var i = actions.Count - 1; i >= 0; --i) {
                ((Action<T1, T2, T3>)actions[i])?.Invoke(arg1, arg2, arg3);
            }
        }
        
        public void Execute<T1, T2, T3, T4>(string eventName, T1 arg1, T2 arg2, T3 arg3, T4 arg4)
        {
            var actions = GetActionList(eventName);
            if (actions == null) 
                return;
            
            for (var i = actions.Count - 1; i >= 0; --i) {
                ((Action<T1, T2, T3, T4>)actions[i])?.Invoke(arg1, arg2, arg3, arg4);
            }
        }
        
        public void Execute<T1, T2, T3, T4, T5>(string eventName, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5)
        {
            var actions = GetActionList(eventName);
            if (actions == null) 
                return;
            
            for (var i = actions.Count - 1; i >= 0; --i) {
                ((Action<T1, T2, T3, T4, T5>)actions[i])?.Invoke(arg1, arg2, arg3, arg4, arg5);
            }
        }
        
        public void Execute<T1, T2, T3, T4, T5, T6>(string eventName, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6)
        {
            var actions = GetActionList(eventName);
            if (actions == null) 
                return;
            
            for (var i = actions.Count - 1; i >= 0; --i) {
                ((Action<T1, T2, T3, T4, T5, T6>)actions[i])?.Invoke(arg1, arg2, arg3, arg4, arg5, arg6);
            }
        }

        #endregion


        #region RemoveListener

        public void RemoveListener(string eventName, Action action)
        {
            var actions = GetActionList(eventName);
            if (actions == null) 
                return;
            
            for (var i = 0; i < actions.Count; ++i) 
            {
                if (actions[0] as Action == action)
                {
                    actions.RemoveAt(i);
                    break;
                }
            }
        }
        
        public void RemoveListener<T1>(string eventName, Action<T1> action)
        {
            var actions = GetActionList(eventName);
            if (actions == null) 
                return;
            
            for (var i = 0; i < actions.Count; ++i) 
            {
                if (actions[0] as Action<T1> == action)
                {
                    actions.RemoveAt(i);
                    break;
                }
            }
        }
        
        public void RemoveListener<T1, T2>(string eventName, Action<T1, T2> action)
        {
            var actions = GetActionList(eventName);
            if (actions == null) 
                return;
            
            for (var i = 0; i < actions.Count; ++i) 
            {
                if (actions[0] as Action<T1, T2> == action)
                {
                    actions.RemoveAt(i);
                    break;
                }
            }
        }
        
        public void RemoveListener<T1, T2, T3>(string eventName, Action<T1, T2, T3> action)
        {
            var actions = GetActionList(eventName);
            if (actions == null) 
                return;
            
            for (var i = 0; i < actions.Count; ++i) 
            {
                if (actions[0] as Action<T1, T2, T3> == action)
                {
                    actions.RemoveAt(i);
                    break;
                }
            }
        }
        
        public void RemoveListener<T1, T2, T3, T4>(string eventName, Action<T1, T2, T3, T4> action)
        {
            var actions = GetActionList(eventName);
            if (actions == null) 
                return;
            
            for (var i = 0; i < actions.Count; ++i) 
            {
                if (actions[0] as Action<T1, T2, T3, T4> == action)
                {
                    actions.RemoveAt(i);
                    break;
                }
            }
        }
        
        public void RemoveListener<T1, T2, T3, T4, T5>(string eventName, Action<T1, T2, T3, T4, T5> action)
        {
            var actions = GetActionList(eventName);
            if (actions == null) 
                return;
            
            for (var i = 0; i < actions.Count; ++i) 
            {
                if (actions[0] as Action<T1, T2, T3, T4, T5> == action)
                {
                    actions.RemoveAt(i);
                    break;
                }
            }
        }
        
        public void RemoveListener<T1, T2, T3, T4, T5, T6>(string eventName, Action<T1, T2, T3, T4, T5, T6> action)
        {
            var actions = GetActionList(eventName);
            if (actions == null) 
                return;
            
            for (var i = 0; i < actions.Count; ++i) 
            {
                if (actions[0] as Action<T1, T2, T3, T4, T5, T6> == action)
                {
                    actions.RemoveAt(i);
                    break;
                }
            }
        }

        #endregion
    }
}