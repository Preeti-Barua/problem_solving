#include<iostream>

using namespace std;

int main()
{

	char text[100];
	int i,count=0;
	cout<<"enter the string::";
	cin>>text;
	for(i=0;text[i]!='\0';i++)
	{
		count++;
		
	}
	cout<<"length is::"<<count;
	return 0;
	
}
