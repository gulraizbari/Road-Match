using DG.Tweening;
using UnityEngine;
using System.Collections;
using Features.GridGeneration.Scripts;

namespace Sablo.Gameplay.Utilities
{
    public class ColorEffect : MonoBehaviour
    {
        private Coroutine _blinkingCoroutine;

        public void ShowColorEffect(Tile tile)
        {
            EnableGlowEffect(tile.GetRenderer().material, 0.375f);
        }

        private void DisableGlowEffect(Material material, float delay)
        {
            var targetEmissionColor = Color.white * 0;
            material.DOColor(targetEmissionColor, "_EmissionColor", delay)
                .SetEase(Ease.Flash).OnComplete(() => { DisableEmission(material); });
        }

        private void EnableGlowEffect(Material material, float delay)
        {
            var targetEmissionColor = Color.gray * 0.6f;
            material.DOColor(targetEmissionColor, "_EmissionColor", 0.15f)
                .SetEase(Ease.Flash)
                .OnStart(() => EnableEmission(material)).OnComplete(() => { DisableGlowEffect(material, delay); });
        }

        private void EnableEmission(Material material)
        {
            material.EnableKeyword("_EMISSION");
        }

        private void DisableEmission(Material material)
        {
            material.DisableKeyword("_EMISSION");
        }

        public void StartBlinking(Tile tile, float interval)
        {
            if (_blinkingCoroutine != null)
            {
                StopCoroutine(_blinkingCoroutine);
            }
            _blinkingCoroutine = StartCoroutine(BlinkEffect(tile, interval));
        }

        public void StopBlinking()
        {
            if (_blinkingCoroutine != null)
            {
                StopCoroutine(_blinkingCoroutine);
                _blinkingCoroutine = null;
            }
        }

        private IEnumerator BlinkEffect(Tile tile, float interval)
        {
            var material = tile.GetRenderer().material;
            while (true)
            {
                ShowColorEffect(tile);
                yield return new WaitForSeconds(interval);
                DisableGlowEffect(material, interval);
                yield return new WaitForSeconds(interval);
            }
        }
    }
}
