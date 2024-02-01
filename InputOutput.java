import java.util.*;


class InputOutput
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enetr first no");
        int No1 = sobj.nextInt();

        System.out.println("Enetr second no");
        int No2 = sobj.nextInt();

        int Ans = 0;
        Ans = No1 + No2;

        System.out.println("Addition is :" +Ans);
    }
}