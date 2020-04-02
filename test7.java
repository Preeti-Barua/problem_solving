class test7
{
    void sum(int a,double b)
    {
        System.out.println( a+b);

    }

    void sum (int a,int b,int c)
    {
        System.out.println( a+b+c);
    }

    public static void main(String args[])
    {
        test7 n1=new test7();
        test7 n2=new test7();
        n1.sum(3,5);
        n2.sum(4,6,4);

    }
}