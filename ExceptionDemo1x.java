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
        try
        {
           System.out.println("Inside try block"); 
           iAns = iNo1/iNo2;
        }
        catch(ArithmeticException obj)
        {
            System.out.println("Inside catch block"+obj);
        }
        catch(ArrayIndexOutOfBoundsException obj)
        {
             System.out.println("Array Index Out Of Bounds Exception"+obj);
        }
        catch(Exception obj)
        {
            System.out.println("Inside generic catch block"+obj);
        }
        finally
        {
            System.out.println("Inside finally Block");
        }
        System.out.println("Division is :" +iAns);

    }
}