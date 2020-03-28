//parameterised constructor

class Person
{
    int rollno;
    String name;
    int age;
    


    Person(int i,String n,int a)
    {
        rollno=i;
        name=n;
        age= a;
    }
        
    

    void Display(){
        System.out.println(rollno + "  " + name + "  " +age);
    }


public static void main(String args[])
 {
    

    Person p1=new Person(101,"abc",23);
    p1.Display();

}
    }

