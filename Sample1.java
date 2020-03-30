class Sample1
{
     private double num1,num2;
     

     //parameterised constructor

     Sample1(double x,double y){


        num1=x;
        num2=y;

     }

     double sum()
     {
         double res= num1+num2;
         return res;
     }
}
class Samples{
    public static void main(String args[])
    {
    Sample1 s =  new Sample1(10.4,3.0);
    double r=s.sum();
     System.out.println("addition is:"+r);
 
    }
}
