#include<iostream>
using namespace std;
int main()
{
	int A[]={1,2,3,4,5,6};
	int i,temp;


	cout<<"the array is::";
	for(i=0;i<A[5];i++)
	{
		cout<<A[i];
		
	}

	cout<<endl;
	temp=A[5];
	for(i=4;i>=0;i--)
	{
		A[i+1]=A[i];
		
	}
	A[0]=temp;
	cout<<"after rotation::";
	for(i=0;i<=5;i++)
	{
		cout<<A[i];
		
	}
	return 0;
	
	
	
	
	
}
