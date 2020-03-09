#include<iostream>
using namespace std;
int main()
// program to print all negative elements in an array.
 
{	int arr[50];
	 int n,i;
	cout<<"enter the size:";
	cin>>n;
	cout<<"enter the array elements::";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}


                   printf("\nAll negative elements in array are : ");
	for(i=0;i<n-1;i++)
	{
		if(arr[i]<0)
		{
		cout<<arr[i];
		}
	}

	return 0;
	
	
	
}
