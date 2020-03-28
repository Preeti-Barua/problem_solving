// contructor overloading
class P
{
    int id;
    String name;
    int age;

    //taking two arguments

    P(int i,String n)
    {
        id=i;
        name=n;
        
    }
    //talking three arguments

    P(int i,String n,int a)
    {
        id=i;
        name=n;
        age=a;
    }

    void Display()
    {
        System.out.println("id is:"+ id);
        System.out.println("name is:"+ name);
        System.out.println("age is:"+ age);

        
        
    }


    public static void main(String args[])
    {
        P p2=new P(101,"abc");
        P p3=new P(102,"bcd",23);
        p2.Display();
        p3.Display();

    }

    
}
