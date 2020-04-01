class Test4
{
    String name,course;
    int rollno;
    float fee;


    Test4(String name,String course,int rollno)
    {

        this.name=name;
        this.course=course;
        this.rollno=rollno;

    }
    Test4(String name,String course,int rollno,float fee)
    {
        this(name,course,rollno);   //reusing constructor
        this.fee=fee;
    }
    void Display()
    {
      
        System.out.println(name + "    "+ course+ "    "+rollno+"    "+ fee);
    }
}
class A
{
    public static void main(String args[]){

    Test4  t1= new Test4("abc","java", 101);
    Test4  t2= new Test4("bcd","java", 102,2345);
    t1.Display();
    t2.Display();
    }

}