#include<iostream>
using namespace std;
 int main()
 {
 	int a[20];
 	int b[10];
 	int sizeA,sizeB;
 	int i,j;
 	cout<<"enter the size of the array A::";
 	cin>>sizeA;
 
 
 	for(i=0;i<sizeA;i++)
 	{
 		cin>>a[i];
	 }
	 
	cout<<"enter the size of the array B::";
 	cin>>sizeB;
	
 	for(i=0;i<sizeB;i++)
 	{
 		cin>>b[i];
	 }
	 cout<<endl;
	 
	cout<<"the array A:";
 	for(i=0;i<sizeA;i++)
 	{
 		cout<<a[i];
	 }
	 cout<<endl;
	cout<<"the array B:";
 	for(i=0;i<sizeB;i++)
 	{
 		cout<<b[i];
	 }
	 for(i=0;i<sizeB;i++)
	 {
	 	a[sizeA+i]=b[i];
	 }
	 cout<<endl;
	 cout<<"after merging::";
	 for(i=0;i<sizeA+sizeB;i++)
	 {
	 	cout<<a[i]<<" ";
	 }
	 int temp;
	 for(i=1;i<sizeA+sizeB;i++)
	 {
	 	for(j=0;j<(sizeA+sizeB);j++)
	 	{
		 
	 	if(a[j]>a[j+1])
	 	{
	 		temp=a[j];
	 		a[j]=a[j+1];
	 		a[j+1]=temp;
		 }
	}
	 }
	 cout<<endl;
	 cout<<"after sorting::";
	 for(i=0;i<sizeA+sizeB;i++)
	 {
	 	cout<<a[i]<<" ";
	 }
	 
	 return 0;
	 
	 
	 
 	
 }
