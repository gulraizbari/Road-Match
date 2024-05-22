namespace Features.UI.Logics
{
    public class LevelFail:PanelBase
    {
        public override void OpenPanel(float delay)
        {
            base.OpenPanel(delay);
            SoundManager.Instance.LevelFail(1);
        }
    }
}