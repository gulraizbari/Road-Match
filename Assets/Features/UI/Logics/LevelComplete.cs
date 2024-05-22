using Features.UI.Logics;
public class LevelComplete : PanelBase
{
    
    public override void OpenPanel(float delay)
    {
        base.OpenPanel(delay);
        SoundManager.Instance.LevelComplete(1);
    }
    
}