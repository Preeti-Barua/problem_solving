#include<iostream>
using namespace std;
int main()
{
	char ch[100];
	int i,countA=0,countD=0,countO=0;
	cout<<"enter anything::::";
	cin>>ch;
	for(i=0;ch[i]!='\0';i++)
	{
		if((ch[i]>='A' && ch[i]<='Z')||(ch[i]>='a'&&ch[i]<='z'))
		{
		
		countA++;
		}
		else if(ch[i]>='0'&&ch[i]<='9')
		{
		
		countD++;
		}
		else
		{
		
		countO++;
		}
	}
	cout<<"alphabets ::"<<countA<<endl;
	cout<<"digit::"<<countD<<endl;
	cout<<"special characters::"<<countO;
	return 0;
}
