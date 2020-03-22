#include<iostream>
using namespace std;
int main()
{
	

	int a[]={2,3,4,1},b[]={6,5,9};
	int m,n,i,j,temp;
	//cout<<"enter the limit of first array::";
	//cin>>m;
	cout<<"the elements of the first array:";
	for(i=0;i<=3;i++)
	{
		cout<<a[i];
		
	}
	cout<<endl;
//	cout<<"enter the limit of second array::";
//	cin>>n;
	cout<<" the elements of the second array:";
	for(i=0;i<=2;i++)
	{
		cout<<b[i];
		
	}
/*	
	
	for(i=0;i<=2;i++)
	{
		a[3+i]=b[i];
	}
	cout<<"after merging the elements::";
	for(i=0;i<=7;i++)
	{
		cout<<a[i];
	}
	cout<<"the elements after sorting ::";
	cout<<endl;
	*/
	for(i=0;i<=6;i++)
	{
		for(j=i+1;i<=6;j++)
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
	for(i=0;i<=6;i++)
	{
		cout<<a[i];
	}  
	
	return 0;
}
