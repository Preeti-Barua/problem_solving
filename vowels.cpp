#include<iostream>
using namespace std;
int main()
{
	char ch[100];
	int i;
	int count=0,count1=0;
	cout<<"enter anything::";
	cin>>ch;
	for(i=0;ch[i]!='\0';i++)
	{
		if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u')
		{
			count++;
		}
		else
		{
			count1++;
		}
		
	}
	cout<<"the vowels are::"<<count<<endl;
	cout<<"the consonents are"<<count1;
	return 0;
	


	
		
}
