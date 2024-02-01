Import java.util.*;

class Collections
{
    public static void main(String Arg[])
    {
        LinkList<Integer> lobj = New LinkList<Integer>();

        lobj.add(10);
        lobj.add(20);
        lobj.add(30);
        lobj.add(40);

        System.out.println(lobj);

        lobj.addFirst(5);

        System.out.println(lobj);
        if(lobj.contains(30))
        {
            System.out.println("LL is contains 30 in it ");
        }
        else
        {
            System.out.println("There is no 30 in the LL");
        }

        System.out.println("Index of 30 is :"+lobj.indexOf(30));
        Iterater iobj = lobj.iterater();

        while(iobj.hasNext())
        {
            System.out.println(iobj.next());
        }
    }
}