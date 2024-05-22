
using UnityEngine;

public  static class GameController //: MonoBehaviour,IGameController
{
    static GameStates States;
    public static void SetState(GameStates newState)
    {
        States = newState;
    }

    public static bool IsState(GameStates state)
    {
        return States == state;
    }
}
