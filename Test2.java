class Test2

/*here in this program we create two objects i1 and i2 ,and then we are incrementing the value of i1 
the incremented value is seen in i2 also because of static keyword!!!!*/

{
    static int x=20;


 void display()
 {
     System.out.println(x);
 }

}

class Instance
{
    public static void main(String args[])
    {
        Test2 i1= new Test2();
        Test2 i2= new Test2();
        //incrementing the i1
        ++i1.x;
        System.out.println("the value of i1:");
        i1.display();
        System.out.println("the value of i1:");
        i2.display();

        
    }
}

