#include<iostream>
using namespace std;
int main()
//program to remove duplicate from array.
{
	int arr[50];
	int i,n,count=0;
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
	cout<<endl;
	//to count duplicates from array.
	for(i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n-1;j++)
		
		{
			if(arr[i]==arr[j])
			{
			                 count++;
		}
				
	}}
	 cout<<"the count of the duplicates are::"<<count;
	 return 0;	
}

	

