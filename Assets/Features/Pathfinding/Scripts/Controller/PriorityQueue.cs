using System.Collections.Generic;

namespace Sablo.Gameplay.Pathfinding
{
    public class PriorityQueue<T>
    {
        private List<KeyValuePair<T, int>> pairs = new List<KeyValuePair<T, int>>();

        public int Count
        {
            get { return pairs.Count; }
        }

        public void Enqueue(T item, int priority)
        {
            pairs.Add(new KeyValuePair<T, int>(item, priority));
        }

        public T Dequeue()
        {
            int highestNumberIndex = 0;
            for (int index = 0; index < pairs.Count; index++)
            {
                if (pairs[index].Value < pairs[highestNumberIndex].Value)
                {
                    highestNumberIndex = index;
                }
            }

            T highestNumber = pairs[highestNumberIndex].Key;
            pairs.RemoveAt(highestNumberIndex);
            return highestNumber;
        }
    }
}