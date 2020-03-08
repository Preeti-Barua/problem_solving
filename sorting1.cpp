#include<iostream>
using namespace std;
int main()
{
	int i,j,temp=0;
	
	int a[]={2,6,4,7,3,1};
	for(i=0;i<6;i++)
	{
		cout<<a[i];
			
	}
	cout<<endl;
	for(i=0;i<6;i++)
	{
		for(j=i+1;j<6;j++)
		
		{
			if(a[j]>a[j+1])
			{
			
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
		}
	}
	
	for(i=0;i<6;i++)
	{
		cout<<a[i];
	}
	return 0;
	
}


	
