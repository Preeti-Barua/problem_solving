#include<iostream>
using namespace std;
int main()
{
	int i,j;
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			if((i==1)||(j==1))
			{
				cout<<"*";
			}
			
			else
			
			{
				cout<<" ";
			}
			
		}
		cout<<endl;
	}
}
