class Base
{
    public int A,B;
    Base()
    {
        System.out.println("Base Constructor");

    }
     public void fun()
      {
        System.out.println("Derived fun");
      }

}
class Derived extends Base
{
      public int X,Y;
      public Derived()
      {
        System.out.println("Derived constructor");
      }
      public void gun()
      {
        System.out.println("Derived gun");
      }
}
class DerivedX extends Derived
{
    public int P,Q;
      public DerivedX()
      {
        System.out.println("DerivedX constructor");
      }
      public void sun()
      {
        System.out.println("DerivedX sun");
      }
}
class Multilevel
{
    public static void main(String A[])
    {
          DerivedX dobj=new DerivedX();
          dobj.fun();
          dobj.gun();
          dobj.sun();
    }
}