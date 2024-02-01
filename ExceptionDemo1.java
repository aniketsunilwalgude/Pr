import java.util.*;
class ExceptionDemo
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter First no : ");
        int iNo1 = sobj.nextInt();

        System.out.println("Enter Second no : ");
        int iNo2 = sobj.nextInt();

        int iAns = 0;
        iAns = iNo1/iNo2;

        System.out.println("Division is :" +iAns);

    }
}