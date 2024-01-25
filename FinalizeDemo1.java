class Employee
{
    public String Name;
    public int Salary;
    public int Age;
    public String Address;

    Employee(String str,int amount,int A,String addresss )
    {
          this.Name=str;
          this.Salary=amount;
          this.Age=A;
          this.Address=addresss;
    }
    protected void finalize()
    {
        System.out.println("Inside Finalize Method..");
    }
    void Display()
    {
        System.out.println("Employee Name:"+this.Name);
        System.out.println("Employee Age:"+this.Age); 
        System.out.println("Employee Salary:"+this.Salary);
        System.out.println("Employee Address:"+this.Address);
    }
}
class FinalizeDemo1
{

    public static void main(String arg[])
    {
           Employee eobj=new Employee("Amit",28,70000,"Karve road pune..");
           eobj.Display();
           //eobj=null;
           Employee eobj2=eobj;
           Employee eobj3=new Employee("Sagar", 30, 60000,"Swargate");
           System.out.println("Hashcode is"+eobj.hashCode());
           System.out.println("Hashcode is"+eobj2.hashCode());
           System.out.println("Hashcode is"+eobj3.hashCode());
           System.gc();
    }

}