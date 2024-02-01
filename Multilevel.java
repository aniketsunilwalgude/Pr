
class Base
{
    public int A,B;
    public Base()
    {
        System.out.println("Base constructor");
    }
    public void Fun()
    {
        System.out.println("Base Fun");
    }
}
class Derived extends Base
{
    public int X,Y;
      public Derived()
    {
        System.out.println("Derived constructor");
    }
       public void Gun()
           {
        System.out.println("Derived Gun");
    }
}

class Derivedx extends Derived
{
    public int P,Q;
    public Derivedx()
    {
        System.out.println("Derivedx constructor");
    }
}
class Multilevel 
{
    public static void main(String arg[])
    {
        Derivedx dobj = new Derivedx();
        dobj.Fun();
        dobj.Gun();
      
    }
}