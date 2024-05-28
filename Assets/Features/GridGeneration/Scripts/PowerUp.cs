
using Sablo.Gameplay.Movement;
using TMPro;
using UnityEngine;

public class PowerUp : MonoBehaviour
{
    public TextMeshPro text;
    public int lvl;

    public void UpdateLvl(int value)
    {
        lvl = value;
        text.SetText($"{value}");
    }

    void OnTriggerEnter(Collider other)
    {
        if (other.TryGetComponent(out Player player))
        {
            player.UpdateLevel(lvl);
            SoundManager.Instance.PlayKey(1);
            gameObject.SetActive(false);
        }
    }
}
