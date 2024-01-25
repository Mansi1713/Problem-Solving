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
class FinalizeDemo3
{

    public static void main(String arg[])
    {
           Employee eobj=new Employee("Amit",28,70000,"Karve road pune..");
           eobj.Display();
           System.out.println("Class Name"+eobj.getClass());
    }

}