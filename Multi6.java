class Demo extends Thread
{
    public void run()
    {
      

    }
}

public class Multi6 {
    
    public static void main(String[] args) {
        System.out.println("Current thread is ruuning."+Thread.currentThread().getName());
        

        Demo obj1=new Demo();
        Demo obj2=new Demo();
       
         obj1.start(); //Runnable state
         obj2.start();

         obj1.setPriority(8);
         obj2.setPriority(10);
         System.out.println("Priority of obj1  :"+obj1.getPriority());
        System.out.println("Priority of obj2   : "+obj2.getPriority());

    }
    
}