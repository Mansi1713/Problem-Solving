/**
 * InnerInterfaceDemo1
 */
interface circle {

     float PI=3.14f;
    float Area(float Radius);
    float circumfarance(float Radius);

    
}
class PPA implements circle
{
    public float Area(float Radius)
    {
        return PI*Radius*Radius;
    }
    public float circumfarance(float Radius)
    {
      return 2*PI *Radius;
    }
}
class InterfaceDemo1
{
    public static void main(String[] args) {
    PPA ppa=new PPA();
//    circle.PI=6.15f;
    float iret=0.0f;
    iret=ppa.Area(3.67f);
    System.out.println("Area is is :"+iret);

    iret=ppa.circumfarance(7.88f);
    System.out.println("Circumference is :"+iret);
        

    }
}