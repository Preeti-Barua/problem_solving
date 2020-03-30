class Sample
{
    private double num1,num2;
    //parameterised constructor
    Sample(double x, double y)

    {
        num1=x;
        num2=y;

    }
    void sum()
    {
        double res=num1+num2;
        System.out.println("the result is:"+res);
        
    }


}
class Method {
    public static void main(String args[])
    {
        Sample j1=new Sample(10,20.3);
        j1.sum();

    }
    
}