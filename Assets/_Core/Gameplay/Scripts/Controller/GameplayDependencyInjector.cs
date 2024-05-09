using Features.GridGeneration.Scripts;
using Features.MergeMechanic.Scripts.Interface;
using GridGeneration.Scripts.interfaces;

namespace Sablo.Core
{
    public class GameplayDependencyInjector : BaseDependencyInjector
    {
        public MergeController mergeController;
        public GridView gridView;
        public override void InjectDependencies()
        {
            gridView.MergeController = mergeController;
        }
    }
}