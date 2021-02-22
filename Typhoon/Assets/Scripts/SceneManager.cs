using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace UnityTemplateProjects
{
    public class SceneManager : MonoBehaviour
    {
        public event Action<Scene> OnSceneLoaded;
        public event Action<Scene> OnSceneUnloaded;

        readonly HashSet<string> scenesLoading = new HashSet<string>();

        void Awake()
        {
            UnityEngine.SceneManagement.SceneManager.sceneLoaded += HandleSceneLoaded;
            UnityEngine.SceneManagement.SceneManager.sceneUnloaded += HandleSceneUnloaded;
        }

        // Just a less redundant way to show the loading screen, unload the current scene and load a new scene.
        public void LoadScene(string sceneName, LoadSceneMode loadSceneMode = LoadSceneMode.Additive, bool isMainScene = false, bool allowDuplicates = false)
        {
            if (scenesLoading.Contains(sceneName) && !allowDuplicates)
                return;

            scenesLoading.Add(sceneName);

            try
            {
                StartCoroutine(LoadSceneAsync(sceneName, loadSceneMode, isMainScene));
            }
            catch (Exception e)
            {
                scenesLoading.Remove(sceneName);
                Debug.LogWarning($"Could not load scene '{sceneName}'. Does it exist?");
            }
        }

        IEnumerator LoadSceneAsync(string sceneName, LoadSceneMode loadSceneMode, bool isMainScene)
        {
            //var loadingScreenOperation = UnityEngine.SceneManagement.SceneManager.LoadSceneAsync(sceneName, loadSceneMode);

            //yield return new WaitUntil(() => loadingScreenOperation.isDone);
        
            var operation = UnityEngine.SceneManagement.SceneManager.LoadSceneAsync(sceneName, loadSceneMode);
            operation.allowSceneActivation = false;

            operation.completed += asyncOperation => HandleSceneLoadCompleted(sceneName, isMainScene);

            while (!operation.isDone)
            {
                //LoadingScreenController.Instance?.SetProgress(Mathf.Clamp01(operation.progress / .9f));

                if (operation.progress >= 0.9f)
                    operation.allowSceneActivation = true;

                yield return null;
            }
        }

        public void UnloadScene(string sceneName)
        {
            StartCoroutine(UnloadSceneAsync(sceneName));
        }
        
        IEnumerator UnloadSceneAsync(string sceneName)
        {
            var operation = UnityEngine.SceneManagement.SceneManager.UnloadSceneAsync(sceneName);

            while (!operation.isDone)
                yield return null;
        }
        
        public void UnloadScene(Scene scene)
        {
            StartCoroutine(UnloadSceneAsync(scene));
        }
        
        IEnumerator UnloadSceneAsync(Scene scene)
        {
            var operation = UnityEngine.SceneManagement.SceneManager.UnloadSceneAsync(scene);

            while (!operation.isDone)
                yield return null;
        }

        void HandleSceneLoadCompleted(string sceneName, bool isMainScene)
        {
            if (isMainScene)
            {
                var scene = UnityEngine.SceneManagement.SceneManager.GetSceneByName(sceneName);
                UnityEngine.SceneManagement.SceneManager.SetActiveScene(scene);
            }
                
            scenesLoading.Remove(sceneName);
        }

        void HandleSceneLoaded(Scene scene, LoadSceneMode loadSceneMode)
        {
            OnSceneLoaded?.Invoke(scene);
            //if (scene.name == sceneToSetActive)
              //  UnityEngine.SceneManagement.SceneManager.SetActiveScene(scene);
        }
        
        void HandleSceneUnloaded(Scene scene)
        {
            OnSceneUnloaded?.Invoke(scene);
        }
    }
}