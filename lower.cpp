#include<iostream>
using namespace std;
#define MAX_SIZE 100
int main()
{
	 char ch[MAX_SIZE];
//	char ch[50];
	cout<<"enter the string:";
	cin>>ch;
	for(int i=0;ch[i]!='\0';i++)
	{
		if(ch[i]>='A'&&ch[i]<='Z')
		{
			ch[i]+=32;
		}
	}
	
	cout<<"the lowecase :::"<<ch;
	return 0;
}
