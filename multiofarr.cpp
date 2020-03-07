#include<iostream>
using namespace std;
int main()
    {
    	//*multiplication of array*
        int arr[]={1,2,3};
        cout<<"the array is::";
        for(int i=0;i<3;i++)
        {
        	
            cout<<arr[i]<<",";
            
            
        }
        cout<<endl;
        int mul=1,i;
        
        for(int i=0;i<=2;i++)
        {
            mul=mul*arr[i];

            
        }
        cout<<"the multiplication of the array is::"<<mul;
        return 0;
    }
