#include<iostream>
using namespace std;
int main()
{
	int A[50];
	int n,i;
	cout<<"enter the limit::";
	cin>>n;
	cout<<"enter the elements of the array::";
	for(i=0;i<n;i++)
	{
		cin>>A[i];
		
	}
	cout<<endl;
	cout<<"the array is:";
	for(i=0;i<n;i++)
	{
		cout<<A[i];
		
	}
	for(i=0;i<=n;i++)
	{
		if(A[i]%2!=0)
		{
			
			cout<<A[i]<<" ";
		}
	
}

	return 0;
}
