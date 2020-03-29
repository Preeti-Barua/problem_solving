//static method
class School{
    int rollno;
    String name;
    static String college="VIT";         //static variable



    School(int r,String s)
    {
        rollno=r;
        name=s;
    }
    void Display(){

    System.out.println(rollno  + name +  +college);
    }


}


public static void main(String args[])

{

    School S1=new School(101,"kartik");
    School S2=new School(102,"Aryan");
     S1.Display();
     S2.Display();

}
    
