#include<iostream>
using namespace std;
int main()
    {
    	//*minimum of array*
        int arr[]={3,2,4,1,6};
        cout<<"the array is::";
        for(int i=0;i<4;i++)
        {
            cout<<arr[i]<<",";
        }
        cout<<endl;
        int min,i;
        min=arr[0];
        for(int i=0;i<=4;i++)
        {
            if(arr[i]<arr[0])
            {
                min=arr[i];
            }
        }
        cout<<"the minimum value is::"<<min;
        return 0;
    }
    

    

