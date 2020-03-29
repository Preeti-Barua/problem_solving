#include<iostream>
using namespace std;
 int main()
 {
 	int a[10];
 	int i,j,temp=0,n;
 	cout<<"the length is:";
 	cin>>n;
 	cout<<"enter the number::";
 	for(i=0;i<n;i++)
 	{
 		cin>>a[i];
 	}
 	
	 
	 i=0;
	 j=n-1;
//	j=n-1;
	 	
	 	temp=a[i];
	 	a[i]=a[j];
	 	a[j]=temp;
	 	
	 
	 	
		 	 
		 
		 	
	for(i=0;i<n;i++)
	{
		cout<<a[i];
	}
	return 0;
}
	
 
