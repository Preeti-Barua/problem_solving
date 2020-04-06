class Test5
//method overloading 
// by changing number of parameters.........
{
    static int add(int a,int b)
    {
        return a+b;
    }
    static int add(int a ,int b,int c)
    {
        return a+b+c;
    }
}
class Demo{
    public static void  main(String args[])
    {
        System.out.println(Test5.add(2,3));
        System.out.println(Test5.add(2,3,4));
        
    }
}