#include<iostream>
using namespace std;
int main()
{
	int arr[100];
	
	
	int i,j,temp,min,n;
	cout<<"enter the size of array::";
	cin>>n;
	cout<<"enter the array:";
	for(i=0;i<=n;i++)
	{
		cin>>arr[i];
	}
	cout<<endl;
	min=arr[0];
	for(i=1;i<n;i++)
	{
	         if(arr[i]<min)
	         {
	         	min=arr[i];
		         }
	}
	
	cout<<min;
}
