class test1
//here we create 2 objects in obj1 and obj2 the value of obj1 is incremented , it doesnt increment the value of obj2...
    int a=10;


    void Display()
    {
        System.out.println(a);
    }
}
class Instance
{
    public static void main(String args[])
    {
        test1 obj1=new test1();
        test1 obj2=new test1();
        obj1.a++;
        System.out.println("the value of obj1=");
        obj1.Display();
        System.out.println("the value of obj2=");
        obj2.Display();


    
    }

}