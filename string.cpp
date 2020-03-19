#include<iostream>
using namespace std;
int main()
{
	int upper=0,lower=0;
	int i;
	char ch[50];
	cout<<"enter the string::";
	cin>>ch;
	while(ch[i]!='\0')
	{
		if(ch[i]>='A'&&ch[i]<='Z')
		{
			upper++;
		}
		if(ch[i]>='a'&&ch[i]<='z')
		{
			lower++;
		}
		i++;
		
	}
	cout<<"the capital letters are:"<<upper;
	cout<<"the small letters are:"<<lower;
	
}
