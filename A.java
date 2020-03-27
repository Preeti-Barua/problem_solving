class A
{
    int rollno;
    int age;
    string name;

    void getData(int r,int a, String n)
    {
        rollno=r;
        age=a;
        name=n;
    }

    void Display()
    {
        System.out.println(rollno+ " " + age + " " +name);
    }
}
class Aa
{
    public static void main(String args[])
    {
        A o1=new A();
        A o2=new A();
        o1.getData(101,23,"preeti");
        o1.getData(102,22,"aaaa");
        o1.Display();
        o2.Display();


    }
}