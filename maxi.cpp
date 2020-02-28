#include<iostream>
using namespace std;
int funct(int ,int );
int funct(int a,int b)
{
	
	if(a>b)
	{
		return a;
	}
	else
	{
		return b;	
		}	
	
}
int main()
{                      int a, b,c;
	cout<<"enter a::";
	cin>>a;
	cout<<"enter b::";
	cin>>b;
	funct(a,b);
	c=funct(a,b);
	cout<<c;
                      
}


