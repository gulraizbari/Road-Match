
using UnityEngine;
using Utilities;

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

    public static int TotalMoney
    {
       
        get => PlayerPrefs.GetInt("Cash",20);
        set => PlayerPrefs.SetInt("Cash", PlayerPrefs.GetInt("Cash" + value));
    }
}
