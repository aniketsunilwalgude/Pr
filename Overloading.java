class Arithmatic
{
    public int Addition (int A, int B)
    {
        return A+B;
    }
    public int Addition(int A, int B, int C)
    {
       return A+B+C;
    }
    public double Addition(double A, double B)
    {
        return A+B;
    }
}

class Overloading
{
    public static void main (String arg[])
    {
        Arithmatic aobj = new Arithmatic();
        
        int iret = 0;
        double dret = 0;

        iret = aobj.Addition(10,11);
        System.out.println("Addition is : "+iret);

        iret = aobj.Addition(11,21,52);
        System.out.println("Addition is : "+iret);

        dret = aobj.Addition(20.8,30.6);
        System.out.println("Addition is : "+dret);
    }
}