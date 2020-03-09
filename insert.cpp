#include<iostream>
using namespace std;
int main()
//program to insert an element in array
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
	cout<<"enter element to insert::"<<endl;
	cin>>ele;
	cout<<" position to which element to be inserted::"<<endl;
	cin>>loc;
	for(i=n-1;i>=loc;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[loc]=ele;
	cout<<"after insertion::"<<endl;
	
	for(i=0;i<=n;i++)
	{
		cout<<arr[i];
	}
	
	return 0;
	

}
