class A
{
    public static void main(Strings args[])
    {
        int n;
        System.out.print("Enter any nember");

        Scanner r=new Scanner(System.in);
        n=r.nextInt();
       int ret= fact(n);
       System.out.println("Factorial of Given :"+ret);

    }
    int Fact(int n)
    {
        if(n==1)
        {return 1}
        else{
           return n*fact(n-1)
        }
    }
}