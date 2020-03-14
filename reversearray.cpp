#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	int a[10],temp;
	cout<<"enter the limit:::::";
	cin>>n;
	cout<<"enter the element of the array::::";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i];
	}
	for(i=0,j=n-1;i<j;i++,j--)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	cout<<"the reverse of the array::::";
	for(i=0;i<n;i++)
	{
		cout<<a[i];
	}
	return 0;
	
}
