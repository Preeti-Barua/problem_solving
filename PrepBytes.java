class PrepBytes
{
    public static void main(String args[])
    {
        int num=123;
        Temp=0;
        while(num>0)
        {
            Temp=Temp*10+num%10;
            num=num/10;
        }
        String s=" ";
    while(Temp>0){
        s=s+Temp%10;
        Temp=Temp/10;
        System.out.println(s);
    }
}
}