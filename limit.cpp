#include<iostream>
using namespace std;
int  main()
{
	int l;
	cout<<"enter the limit::";
	cin>>l;
	for(int i=0;i<=l;i++)
	{
		if(i%2==0)
		{
			cout<< "!"<<i<<" "<<" EVEN"<<endl;
		}
		else
		{
			cout<< "!"<<i <<" "<<" ODD"<<endl;
		}
	}
	return 0;
}
