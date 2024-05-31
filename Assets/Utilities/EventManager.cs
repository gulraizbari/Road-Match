using System;

namespace Utilities
{
    public static class EventManager
    {
        public static event Action<int> _updateMoves;

        public static void UpdateMoves(int moves)
        {
            _updateMoves?.Invoke(moves);
        }
    }
}