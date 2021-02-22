# Typhoon
 
## Contributors
- Liam HALL (Programmer)
- Bradley ASHELY (Programmer)
- Callum MAXWELL (Programmer)
- Savir SOHAL (Designer)
- Charlie LEWIN (Designer)
- Zhi CHEN (Designer)
- Harry ROLLINSON (Designer)
- James GLEDHILL (Designer)
- Paige ALLPORT (Designer)

## Rules
- **Do not upload *.uasset* files** unless a merge has been organised.

## Documentation
1. `World.Instance` is the only singleton and does most things a singleton should.
2. Each game should be in its own Scene.
3. A `GameMode` per game. Inherit from `GameMode`.
4. To set the GameMode of a Scene, just put the child GameMode component on any object in the Scene.
5. You can get the GameMode using `World.Instance.GameMode`. Depending on how you customised your GameMode, you may need to do some casting (`var gameMode = World.Instance.GameMode as PongGameMode;`).
6. To mark the game as completed, do `GameMode.GoalReached = true`.
7. To end the game, do `GameMode.EndGame()`. This will display a game over screen.
8. To exit the game, do `GameMode.ExitGame()`. This will exit the game.
9. To check if the game is paused, do `GameMode.Paused`.
10. To know when the game is paused, do either:
   - subscribe to `GameMode.OnPaused`.
   - override `GameMode.HandleOnPaused(bool isPaused)`.
11. Do `World.Instance.PlayerCount` to get the number of local players. (Example: if there's only one player, do one-player Pong with one AI, else, do two-player Pong.)

Other than that, code the game as you'd like. GameMode does have other features but you don't need to use them if you don't want to.
