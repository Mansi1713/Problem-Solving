import java.awt.*;
import java.awt.event.WindowEvent;
import java.awt.event.WindowListener;

 class MarvellousFrame {
           
    public MarvellousFrame(String title)
    {
        Frame fobj=new Frame(title);
        fobj.setSize(300,600);
        fobj.setVisible(true); 
    }
    
}
class MarvellousListner implements WindowListener
{
      public void windowDeactivated(WindowEvent obj)
      {

      }
      public void windowActivated(WindowEvent obj)
      {
        
      }
      public void windowDeiconified(WindowEvent obj)
      {
        
      }
      public void windowOpened(WindowEvent obj)
      {

      }
       public void windowClosed(WindowEvent obj)
      {

      }
      public void windowClosing(WindowEvent obj)
      {
          System.exit(0);
      }
      public void windowIconified(WindowEvent obj)
      {
        
      }
}
class GUI3
{
    public static void main(String Arg[])
    {
        MarvellousFrame mobj=new MarvellousFrame("PPA49");
    }
}