
class FinalizedDemo3
{
    public static void main(String Arg[])
    {
        Employee eobj = new Employee("Amit",78000,28,"Karvrnagaer");
        eobj.Display();

        System.out.println(eobj.getClass());
        System.out.println(str.getClass());
  
    }
}
class Employee
{
    public String Name;
    public int Salary;
    public int Age;
    public String Address;

    Employee(String str , int amount , int A, String Addr)
    {
        this.Name = str;
        this.Salary = amount;
        this.Age = A;
        this.Address = Addr;

    }
   
    void Display()
    {
        System.out.println("Employee name :"+this.Name);
        System.out.println("Employee Salary :"+this.Salary);
        System.out.println("Employee Age :"+this.Age);
        System.out.println("Employee Address :"+this.Address);            

    }
}

