import java.util.*;

class mainn
{
    public static void main(String args[])
    {
        Scanner s = new Scanner(System.in);

        System.out.println("enter the string");
        String str=s.nextLine();

        char Arr[]=str.toCharArray();

        System.out.println(Arr.length);
        System.out.println(str.length());

    }
}