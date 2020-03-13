#include<iostream>
using namespace std;
int main()
{
	int a[10];
	int i,n,D,sum=0,sum1=0, min=0;;
	cout<<"enter the limit :";
	cin>>n;
	cout<<"enter the elements of the array::";
	for(i=0;i<=n;i++)
	{
		cin>>a[i];
	}
	cout<<"the array is:::::";
	
	for(i=0;i<=n;i++)
	{
		cout<<a[i]<<"  ";
		//cout<<endl;
	}
	for(i=0;i<=n/2;i++)
	{
		sum=sum+a[i];
	}
	cout<<endl;
	cout<<"the sum of the first two elements::"<<sum<<endl;
	for(i>n/2;i<=n;i++)
	{
		sum1=sum1+a[i];
	}
	cout<<"the sum of the second two elements::"<<sum1<<endl;
	
	min=sum;
	if(sum1=sum)
	{
		cout<<"the addition of both first array and second array is same....."<<endl;
	}
	
	if(sum>sum1)
	{
		min=sum1;
		D=sum-sum1;
	}
	
	else
	{
		D=sum1-sum;
	}
	
	
	

	cout<<"the diffrence is:"<<D;
	return 0;
	
	
	
}
