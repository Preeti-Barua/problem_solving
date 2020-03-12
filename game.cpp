#include<iostream>
using namespace std;
int main()
/*Write a guessing game where the user has to guess a secret number.
 After every guess the program tells the user whether their number was too large or too small.
  At the end the number of tries needed should be printed. 
It counts only as one try if they input the same number multiple times consecutively.*/
{
	int NUMBER=5,i,count=0,n;
	cout<<"enter the number in between 1 to 10 only!!!!!!!!!!!";
	cout<<"you have 10 attempts.."<<endl;

	for(i=0;i<10;i++)
	{
		cout<<"guess the number::"<<endl;
		cin>>n;
		
	
		if(NUMBER==n)
		{
			cout<<"congratulations!!!!!"<<endl;
			break;
			
		}
		if(((n-NUMBER==-2)||(n-NUMBER==-1))||((NUMBER-n==-2)||(NUMBER-n==-1)))
		{
			cout<<"you are close"<<endl;
			
		}
		if(n<NUMBER)
		{
			cout<<" too small "<<endl;
		}
		if(n>NUMBER)
		{
			cout<<"too large"<<endl;
		}
		
		
		
		
		count++;
		
		
		
		
	}

	
	cout<<"number of tries::"<<count;
	return 0;
	
	
}
