class Employee{
    String name;
     int id;
    float salary;
    

    void getData(String n, int i,float s){
    name=n;
    id=i;
    salary=s;
    }

    void displayData(){
        System.out.println(name+" "+id+" "+salary);
    }
}
class E
{
    public static void main(String args[])
    {
        Employee e1=new Employee();
        e1.getData("preeti", 101, 1200);
        Employee e2=new Employee();
        e2.getData("mota", 102, 1220);
        e1.displayData();
        e2.displayData();


    }
}


    


