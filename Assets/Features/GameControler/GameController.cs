
using Helpers;
using TMPro;
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
    
    public static void AddCash(int num1, int num2, TextMeshProUGUI text)
    {
        GameCash = new Money( num1+ num2);
        text.text = GameCash.ToString();
    }
    public static void AddCash(int num1, int num2, MultiText text)
    {
        GameCash = new Money( num1+ num2);
        ShowCash(text);
    }
    public static void UpdateCash(int num1, int num2)
    {
        GameCash = new Money( num1+ num2);
    }
    public static void SubtractCash( int num2,TextMeshProUGUI text)
    {
        GameCash = new Money(GameCash.ToInt() - num2);
        ShowCash(text);
    } 
    public static void SubtractCash( int num2,MultiText text)
    {
        GameCash = new Money(GameCash.ToInt() - num2);
        ShowCash(text);
    }
    public static void ShowCash(TextMeshProUGUI text)
    {
        if (PlayerPrefs.HasKey("GameCash"))
        {
              
            text.text = GameCash.ToString();
        }
        else
        {
            GameCash = new Money(0, MoneyPrefix.Empty);
            text.text = GameCash.ToString();
        }
    } 
    public static void ShowCash(MultiText text)
    {
        if (PlayerPrefs.HasKey("GameCash"))
        {
              
            text.UpdateText(GameCash.ToString());
        }
        else
        {
            GameCash = new Money(0, MoneyPrefix.Empty);
            text.UpdateText(GameCash.ToInt().ToString());
        }
    }

    public static Money GameCash
    {
        set =>PlayerPrefs.SetString("GameCash", JsonUtility.ToJson(value));
        get =>JsonUtility.FromJson<Money>(PlayerPrefs.GetString("GameCash", "0"));
    }

   
}
