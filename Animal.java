//super is used to refer immediate parent class instance variable.


//We can use super keyword to access the data member or field of parent class. 
//It is used if parent class and child class have same fields.

class Animal
{
    String color="white";
}
class Dog extends Animal
{
    String color="black";
    void printcolor()
    {
        System.out.println(color);           //prints colour of dog class

        System.out.println(super.color);    //printscolour of animal class
    }
}
class Demo
{
    public static void main(String args[])
    {
        Dog d=new Dog();
        d.printcolor();
    }
}
