interface Mathematics
{
    public int Addition(int A,int B);
    public int Subtraction(int A,int B);

}
class Marvellous implements Mathematics
{
    public int Addition(int A,int B)
    {
        return A+B;
    }
    public int Subtraction(int A,int B)
    {
        return A-B;
    }

}
class InterfaceDemo
{
    public static void main(String[] args) {
    Marvellous mobj=new Marvellous();
    int iret=0;
    iret=mobj.Addition(11,21);
    System.out.println("Addition is :"+iret);

    iret=mobj.Subtraction(90, 23);
    System.out.println("Addition is :"+iret);
        

    }
}