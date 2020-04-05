class j1
{
    finat int speedlimit=60;

    void run()
    {
        speedlimit=40;
    }

 public static void main(String[] args) {

    j1 j=new j1();
    j.run();

}
/*There is a final variable speedlimit, we are going to change the value of this variable,

 but It can't be changed because final variable once assigned a value can never be changed.
 The output wil give error!!
 */
}
