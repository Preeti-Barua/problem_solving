#include<iostream>
using namespace std;
int main()
{                     long sum=0;
                    
	long arr[]={1000001,1000002,1000003,1000004};
	for(int i=0;i<4;i++)
	{
		sum=sum+arr[i];
	}
	cout<<sum;
	return 0;
}
