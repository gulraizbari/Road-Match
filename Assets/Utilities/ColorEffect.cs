using DG.Tweening;
using Features.GridGeneration.Scripts;
using UnityEngine;

namespace Sablo.Gameplay.Utilities
{
    public class ColorEffect : MonoBehaviour
    {
        public void ShowColorEffect(Tile tile)
        {
            EnableGlowEffect(tile.GetRenderer().material, .125f);
        }

        private void DisableGlowEffect(Material material, float delay)
        {
            Color targetEmissionColor = Color.white * 0;
            material.DOColor(targetEmissionColor, "_EmissionColor", delay)
                .SetEase(Ease.Flash).OnComplete(() => { DisableEmission(material); });
        }

        private void EnableGlowEffect(Material material, float delay)
        {
            Color targetEmissionColor = Color.white * 1.1f;
            material.DOColor(targetEmissionColor, "_EmissionColor", delay)
                .SetEase(Ease.Flash)
                .OnStart(() => EnableEmission(material)).OnComplete(() => { DisableGlowEffect(material, .125f); });
        }

        private void EnableEmission(Material material)
        {
            material.EnableKeyword("_EMISSION");
        }

        private void DisableEmission(Material material)
        {
            material.DisableKeyword("_EMISSION");
        }
    }
}