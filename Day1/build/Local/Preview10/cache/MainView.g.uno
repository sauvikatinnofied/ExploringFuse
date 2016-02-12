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
        var temp = new Fuse.Controls.StackPanel();
        var temp1 = new Fuse.Controls.Button();
        var temp2 = new Fuse.Controls.Button();
        var temp3 = new Fuse.Controls.Button();
        var temp4 = new Fuse.Controls.Button();
        var temp5 = new Fuse.Controls.Text();
        this.Background = float4(0.9333333f, 0.9333333f, 0.9333333f, 1f);
        temp.Children.Add(temp1);
        temp.Children.Add(temp2);
        temp.Children.Add(temp3);
        temp.Children.Add(temp4);
        temp1.Text = "Press Me";
        temp2.Text = "Press Me";
        temp3.Text = "Press Me";
        temp4.Text = "Press Me";
        temp5.Value = "Hello World";
        this.RootNode = temp5;
        this.Theme = Fuse.BasicTheme.BasicTheme.Singleton;
    }
}
