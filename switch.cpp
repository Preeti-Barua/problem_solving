#include<iostream>
using namespace std;
int main()
{
	int n,sum=0,mul=1,i,a;
	cout<<"operations are:"<<endl;
	
	cout<<"1. 'x'"<<endl;
	cout<<"2. '+'"<<endl;
	
	cout<<"enter your choice operation::";
	cin>>n;
	
	
	
	cout<<"enter  number::"<<endl;
	cin>>a;
	
	
	
	switch(n)
	{
		case 1:
			
				cout<<"multiplication"<<endl;
				
				for( i=1;i<=a;i++)
				{
				
				mul=mul*i;
			}
				cout<<endl;
				cout<<"multiplication is::"<<mul<<endl;
			
			
				break;
				
				
			
				
			
		case 2:
			
				cout<<"addition"<<endl;
				for( i=1;i<=a;i++)
				{
				
			
				sum=sum+i;
			}
				cout<<"summation is ::"<<sum<<endl;
				cout<<endl;
			
				break;
			
			
		
				
			
		default:
			{
				cout<<"you have entered wrong operation"<<endl;
				break;

			}
	
		}
		return 0;
	}
	
	
	

	




