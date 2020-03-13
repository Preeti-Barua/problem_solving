#include<iostream>
using namespace std;
int main()
{
	int a[]={37,43,7,54};
	int i,sum=0,sum1=0,D;
	for(i=0;i<=3;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	
	
	for(i=0;i<=1;i++)
	{
		sum=sum+a[i];
		cout<<sum;
	}
	cout<<"the sum of the first two elements::"<<sum<<endl;
	
	for(i=2;i<=3;i++)
	{
		sum1=sum1+a[i];
		
		
	}
	cout<<"the sum of the first two elements::"<<sum1<<endl;
	D=sum-sum1;
	cout<<"the diffrence is:"<<D;
	return 0;
	
}
