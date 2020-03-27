//There is given another example that maintains the records of Rectangle class.
class Rectangle{

    int length;
    int breadth;

    void getData(int l,int b){
        length=l;
        breadth=b;
    }

    void DisplayData()
    {
        System.out.println("Area" + (length*breadth));
    }
}
class R
{
    public static void main(String args[])
    {
        Rectangle r1= new Rectangle();
        Rectangle r2= new Rectangle();
        r1.getData(12,3);
        r2.getData(12,2);
        r1.DisplayData();
        r2.DisplayData();
    }
}