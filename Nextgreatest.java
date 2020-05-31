public class Nextgreatest{
    public static void main(String args[])
    {

        int arr[]={3,4,20,6,15,2,3,8};
        int i,j;
       int maxfromright=arr[7];
      // System.out.println("the max is:  "+max);
      
      for(i=8-2;i>=0;i--)
      {
          if(maxfromright>arr[i])
          {
              arr[i]=maxfromright;
          }
          else{
              maxfromright=arr[i];
          }

      }
      System.out.println("the array is::" + arr[i]);


    }

}