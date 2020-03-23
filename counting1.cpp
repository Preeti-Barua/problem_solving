#include<iostream>
using namespace std;
int main()
{
	char str[100];
	int count;
	cout<<"enter the string::";
	gets(str);
	int i=0;
	count=1;
	while (str[i]!='\0')
//	for(i=0;str[i]='\0';i++)
	{
		if(str[i]== ' '|| str[i]=='\n'|| str[i]=='\t')
		{
			count++;
			
		}
	}
	i++;
	cout<<"the words are:::"<<count;
	return 0;
	
}
