public partial class MainView: Fuse.App
{
    static MainView()
    {
    }
    public MainView()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        this.ClearColor = float4(0.227451f, 0.254902f, 0.345098f, 1f);
        this.Theme = Fuse.BasicTheme.BasicTheme.Singleton;
    }
}
