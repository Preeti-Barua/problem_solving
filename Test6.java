class Test6
{
    static int T(int a,int b)
    {
        return a+b;
    }

    static double T(double a,double b)
    {
        return a+b;
    }
}
class Demo1
{
    public static void  main(String args[]) {
        System.out.println(Test6.T(3,4));
        System.out.println(Test6.T(3.5,4.5));

        
    }
}