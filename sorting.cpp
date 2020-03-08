#include<iostream>
using namespace std;
int  main()
{
	int a[]={1,3,2,5,4};
	int i,temp=0;
	for(i=0;i<5;i++)
	{
		cout<<a[i];
		
	}
	
	for(i=0;i<4;i++)
	
	{
	    if(a[i]>a[i+1])
	    {
	    	temp=a[i];
	    	a[i]=a[i+1];
	    	a[i+1]=temp;
		    }	
	}
	cout<<a[i];
	
}
