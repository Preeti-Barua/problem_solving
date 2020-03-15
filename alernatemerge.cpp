#include<iostream>
using namespace std;
 int main()
 {
 	int a[50]={1,3,5,7};
 	int b[10]={2,4,6,8};
 	int i,j,k=1,m=3;
 	cout<<"the array A is::::";
 	for(i=0;i<=3;i++)
 	{
 		cout<<a[i];
		 
	 }
	 cout<<endl;
	cout<<"the array B is::::";
 	for(i=0;i<=3;i++)
 	{
 		cout<<b[i];
		 
	 }
	 cout<<endl;
	 for(i=0;i<=3;i++)
	 {
	 	for(j=m;j>=k;j--)
	 	{
	 		a[j+1]=a[j];
		 }
		a[k] =b[i];
		k=k+2;
		m++;
		}
	cout<<"after merging the array::::::";
	for(i=0;i<=7;i++)
	{
		cout<<a[i];
	}
			 
	 return 0;
 }
