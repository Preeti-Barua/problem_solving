#include<iostream>
using namespace std;
int main()
//program to delete an element in array.
{
	int arr[50];
	int i,loc,n,ele;
	cout<<"enter the size::";
	cin>>n;
	cout<<"enter the elements to be inserted::";
	
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		
	}
	cout<<"the array is::";
	for(i=0;i<n;i++)
	{
		cout<<arr[i];
		
	}
	cout<<"enter position to be deleted::"<<endl;
	cin>>loc;
	for(i=loc;i<n-1;i++)
	{
		arr[i]=arr[i+1];
	}
	cout<<"the new array after deletion is::";
	for(i=0;i<n-1;i++)
	{
		cout<<arr[i];
	}
	return 0;
}
	
