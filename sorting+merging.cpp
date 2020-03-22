#include<iostream>
using namespace std;
int main()
{
	

	int a[10],b[10];
	int m,n,i,j,temp=0;
	cout<<"enter the limit of first array::";
	cin>>m;
	cout<<"enter the elements of the first array:";
	for(i=0;i<=m;i++)
	{
		cin>>a[i];
		
	}
	cout<<"enter the limit of second array::";
	cin>>n;
	cout<<"enter the elements of the second array:";
	for(i=0;i<=n;i++)
	{
		cin>>b[i];
		
	}
	
	
	for(i=0;i<=n;i++)
	{
		a[m+i]=b[i];
	}
	cout<<"after merging the elements::";
	for(i=0;i<=m+n;i++)
	{
		cout<<a[i];
	}
	cout<<"the elements after sorting ::";
	cout<<endl;
	for(i=0;i<=m+n;i++)
	{
		for(j=i+1;i<=m+n;j++)
		{
			if (a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	
	cout<<"the elements after sorting ::";
	for(i=0;i<=m+n;i++)
	{
		cout<<a[i];
	}  
	
	return 0;
}
