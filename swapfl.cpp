#include<iostream>
using namespace std;
 int main()
 {
 	int a[10];
 	int i,j,temp,n;
 	cout<<"the length is:";
 	cin>>n;
 	cout<<"enter the number::";
 	for(i=0;i<=n;i++)
 	{
 		cin>>a[i];
 	}
	 
	 for(i=0;i<=n;i++)
	 {
	 	
	 for(j=n-1;j>=i;j--)
	 {
	 	
	 	temp=a[i];
	 	a[i]=a[j];
	 	a[j]=temp;
		 	 }
		 }
		 	
	for(i=0;i<n;i++)
	{
		cout<<a[i];
	}
	return 0;
}
	
 
