class Demo implements Runnable
{



    public void run()
     {
        System.out.println("Threadd is running");
     }
    

    }
public class Multi2{
  
    public static void main(String[] args) {
        
        System.out.println("Inside main thread..");
        Demo obj1=new Demo();
        Demo obj2=new Demo();

        obj1.start();
        obj2.start();
    }
     
}
