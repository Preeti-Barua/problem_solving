/*2) super can be used to invoke parent class method
The super keyword can also be used to invoke parent class method. It should be used if subclass contains the same method as parent class.
 In other words, it is used if method is overridden */

class Animals
{
    void eat()
    {
        System.out.println("eating...");
    }
}
class Dog extends Animals

{

    void eat(){   
        System.out.println("eating bread");}
    void bark() {
        System.out.println(" barking....");}
    void work (){
      eat();
      bark();
    }
    
   
}
class Demo
{
    public static void main(String args[])
    {
    
        Dog d =new Dog();
        d.work();
    
    }
}
