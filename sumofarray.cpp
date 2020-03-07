#include<iostream>
using namespace std;
int main()
    {
    	
	//*sum of array*
        int arr[]={3,2,4,1,6};
        cout<<"the array is::";
        for(int i=0;i<5;i++)
        {
        	
            cout<<arr[i]<<",";
            
            
        }
        cout<<endl;
        int sum=0,i;
        
        for(int i=0;i<=4;i++)
        {
            sum+=arr[i];

            
        }
        cout<<"the sum of the array is::"<<sum;
        return 0;
    }
