class Employee implements Cloneable
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
    void Display()
    {
        System.out.println("Employee Name:"+this.Name);
        System.out.println("Employee Age:"+this.Age); 
        System.out.println("Employee Salary:"+this.Salary);
        System.out.println("Employee Address:"+this.Address);
    }
    public Object clone() throws CloneNotSupportedException
    {
        return super.clone();
    }
}
class FinalizeDemo4
{

    public static void main(String arg[]) throws Exception
    {
          try
          {
           Employee eobj=new Employee("Amit",28,70000,"Karve road pune..");
           Employee eobj2=(Employee)eobj.clone();

           eobj.Display();
           eobj2.Display();
           System.out.println("Hascode of eobj"+eobj.hashCode());
           System.out.println("Hascode of eobj2"+eobj2.hashCode());
          }
          catch(CloneNotSupportedException ex)
          {
            System.out.println("Inside catch..");
          }  
    }       

}