#include<iostream>
using namespace std;
int main()
{
	int arr[50];
	int i,j,n,temp;
	cout<<"the size of the array:::";
	cin>>n;
	cout<<"enter the array elements :::";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"the array  :::";
	for(i=0;i<n;i++)
	{
		cout<<arr[i];
	}
	for(i=0,j=n-1;i<j;i++,j--)
	{
		
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}
	cout<<"the reverse of the array is:: ";
	for(i=0;i<n;i++)
	{
		cout<<arr[i];
	}
	return 0;
	
}
