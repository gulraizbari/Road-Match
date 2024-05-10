using TapticPlugin;

namespace Features.Haptics.Interfaces
{
    public interface IHapticController
    {
        void PlayHaptic(ImpactFeedback feedback);
    }
}