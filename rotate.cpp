#include<iostream>
using namespace std;

    int main()
    {
    	 int i,n,temp;
        int arr[]={1,2,3,4,5};
        cout<<"the given array is::";
              for(i=0;i<5;i++)
        {
        	cout<<arr[i];
        	cout<<endl;
        }


        temp=arr[4];
        
        for(i=3;i>=0;i--)
        {
        

            arr[i+1]=arr[i];
}
        
        arr[0]=temp;
        cout<<"the array after rotation is:::";
        for(i=0;i<=4;i++)
        {
        	cout<<arr[i];
        }
        return 0;

    }
    
    

    

