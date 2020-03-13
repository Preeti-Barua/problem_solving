#include<iostream>
using namespace std;
int main()


{
	int arr[10];
	int n,i,j,temp;
	cout<<"enter the limit : ";
	cin>>n;
	cout<<"enter the element of the array:";
	for(i=0;i<=n;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<=n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
				
			}
		}
	}
	cout<<"after sorting::";
	for(i=0;i<=n;i++)
	{
		cout<<arr[i];
	}
	return 0;

}
