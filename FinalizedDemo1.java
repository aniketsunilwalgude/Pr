
class FinalizedDemo
{
    public static void main(String Arg[])
    {
        Employee eobj = new Employee("Amit",78000,28,"Karvrnagaer");
        eobj.Display();
        eobj = null;
        System.gc();
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
    protected void finalized()
    {
        System.out.println("Inside Finalized method...");
    }
    void Display()
    {
        System.out.println("Employee name :"+this.Name);
        System.out.println("Employee Salary :"+this.Salary);
        System.out.println("Employee Age :"+this.Age);
        System.out.println("Employee Address :"+this.Address);            

    }
}

