class single
{
    void eat()
    {
        System.out.println("eating");
    }
}
class In extends single
{
    void bark()
    {
        System.out.println("drinking");
    }

}
class Inte{
    public static void main(String args[])
    {
        In i= new In();
        i.bark();

    }
}
