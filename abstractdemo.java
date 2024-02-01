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
class AbstractDemo
{
    public static void main(String arg[])
    {
        Demo obj = new Demo();
    }
}