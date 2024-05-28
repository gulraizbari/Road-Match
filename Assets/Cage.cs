
using UnityEngine;

public class Cage : MonoBehaviour
{
   [SerializeField]  GameObject _cage;
   [SerializeField] GameObject _confetti;

   public void CageEffect()
   {
      _cage.SetActive(false);
      _confetti.SetActive(true);
   }
   public void EnableCage()
   {
      _cage.SetActive(true);
     
   }
}
