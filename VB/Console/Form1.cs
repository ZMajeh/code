using System.Windows.Forms; 
using System.Drawing;
using System; 
public class Form1 : Form 
{ 
    public void FormLayout() 
    { 
        this.Name = "Form1"; 
        this.Text = "Form1"; 
        this.Size = new System.Drawing.Size(500, 500); 
        this.StartPosition = FormStartPosition.CenterScreen; 
        Button b1=new Button();
        b1.Text="Hello World";
        b1.Location= new Point(100,100);
        b1.Size= new Size(300,30);
        b1.Visible=true;
        b1.BringToFront();
        
        this.Controls.Add(b1);


    } 
}