abstract class Demo
{
    public int A;
    public int B;
    public Demo()
    {
        System.out.println("Inside constructor");
        this.A = 0;
        this.B = 0;
    }
    abstract void Fun();  //virtual void Fun() = 0
    void Gun()
    {
        System.out.println("Inside Gun");
    }
}
class Hello extends Demo
{
    public Hello()
    {
        System.out.println("Inside Hello constructor");
    }
    public void Fun()
    {
        System.out.println(" Inside Fun of Hello");
    }

}
class abstractdemo1
{
    public static void main(String arg[])
    {
        Hello hobj = new Hello();
        hobj.Fun();
        hobj.Gun();
    }
}