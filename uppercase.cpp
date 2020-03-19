#include<iostream>
using namespace std;
int main()
// program to convert lowercase string to uppercase
{
	char ch[50];
	int i;
	cout<<"enter the string::";
	cin>>ch;
	for(i=0;ch[i]!='\0';i++)
	{
		if(ch[i]>='a'&&ch[i]<='z')
		{
			ch[i]-=32;
		}
	}
	cout<<"the uppercase string is::"<<ch;
	return 0;
	
}
