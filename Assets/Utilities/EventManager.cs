using System;

namespace Utilities
{
    public static class EventManager
    {
        public static event Action<int> _updateMoves;
        public static event Action _onMoneyUpdate;

        public static void UpdateMoves(int moves)
        {
            _updateMoves?.Invoke(moves);
        }
        public static void OnMoneyUpdate()
        {
            _onMoneyUpdate?.Invoke();
        }
    }
}