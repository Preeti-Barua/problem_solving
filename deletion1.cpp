#include<iostream>
using namespace std;
int main()
{
	int Q[10]={1,7,2,3,4};
	int i;
	int loc;
	cout<<"the array is :::";
	for(i=0;i<=4;i++)
	{
		cout<<Q[i];
	}
	cout<<endl;
	cout<<"enter the element which  you need to delete::";
	cin>>loc;
	for(i=loc;i<=4;i++)
	{
		Q[i]=Q[i+1];
	}
	cout<<"the array after deletion is:::";
	for(i=0;i<=3;i++)
	{
		cout<<Q[i];
	}
}
