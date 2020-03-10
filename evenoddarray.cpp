#include<iostream>
using namespace std;
int main()
{
	int arr[50];
	int i,j,n;
	cout<<"the array size::";
	cin>>n;
	cout<<"enter the elements::";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		
	}
	for(i=0;i<n;i++)
	{
		cout<<arr[i];
		cout<<" ";
	}
	cout<< " ";
	cout<<"the even eleements are::";
	for(i=0;i<n;i++)
	
		if(arr[i]%2==0)
		{
			
			cout<<arr[i];
			cout<<" ";
			
			
		}
	
	
	
	cout<<"the odd eleements are::";
	for(i=0;i<n;i++)
	{
	
		if(arr[i]%2!=0)
		{
			cout<<arr[i];
			cout<<" ";
			
		}
		
	}


	return 0;
}

