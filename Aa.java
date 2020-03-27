class A
{
    int rollno;
    int age;
   

    void getData(int r,int a)
    {
        rollno=r;
        age=a;
        
    }

    void Display()
    {
        System.out.println(rollno+ " " + age );
    }
}
class Aa
{
    public static void main(String args[])
    {
        A o1=new A();
        A o2=new A();
        o1.getData(101,23);
        o1.getData(102,22);
        o1.Display();
        o2.Display();


    }
}