//MULTILEVEL INHERITANCE
class multiple

{
    void eat()
    {
        System.out.println("eating");
    }
}
class dog extends multiple
{
    void bark()
    {
        System.out.println("barking");
    }
}
class bdog extends dog{
    void weep()
    {
        System.out.println("weeping");
    }
}
class H
{
    public static void main(String args[])
    {
        bdog n=new bdog();
        n.weep();
        n.bark();
        n.eat();


    }
}