//static block
class Static1
{
    static{
        System.out.println("Static block");
    }
    public static void main(String args[])
    {
        System.out.println("method");
    }

    /* In the output we will see that at very first the Static block prints first becoz JVM 
    executes the static block first before it looks for the main() method in the program  */
    
}