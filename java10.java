//Hierarchical Inheritance
class java10
{
    void eat()
    {
        System.out.println("helloo");
    }
}
class j extends java10
{
    void bark()
    {
        System.out.println("hello fam");
    }
}
class jj extends java10
{
    void meow()
    {
        System.out.println("hello famjam");
    }
}
class DEMO
{
    public static void main(String args[]){

    
       jj j1=new jj();
       j1.eat();
       j1.meow();
      // j1.bark();
    }
  

    
}