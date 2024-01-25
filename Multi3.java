class Demo extends Thread
{
    public void run()
    {
         String name=Thread.currentThread().getName();         
         System.out.println("Current thread is ruuning.."+Thread.currentThread().getName());
         for(int i=1;i<100;i++)
         {

        // System.out.println("Name of thread"+name,"counter"+i);
    }
}
}
class Multi3
{
    public static void main(String Arg[])
    {
        System.out.println("Current thread is ruuning."+Thread.currentThread().getName());
        

        Demo obj1=new Demo();
        Demo obj2=new Demo();
         obj1.start(); //Runnable state
         obj2.start();

         System.out.println("Thread goes to dead state..");

        }

}