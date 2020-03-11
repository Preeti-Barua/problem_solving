#include<iostream>
using namespace std;
int main ()
{
	// program to search an element in an array
	int arr[10];
	int i,j,n,ele;
	cout<<"enter the size:";
	cin>>n;
	cout<<"enter the elements of the array::";
	
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<n;i++)
	{
		cout<<arr[i];
	}
	cout<<"enter the element to be found:";
	cin>>ele;
	
	for(i=0;i<n-1;i++)
	{
	
		if(arr[i]==ele)
		{
			cout<<arr[i];
			}	
			
		
	}
	cout<<"the element found"<<arr[i];
	
	return 0;
}
	
	
