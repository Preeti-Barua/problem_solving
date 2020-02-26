#include<iostream>
using namespace std;
int main()
{
	 int arr[50],size;
	 int i,count=0;
	 int max;
	 cout<<"enter the size of an array::";
	 cin>>size;
	 cout<<"enter the elements of an array::";
	 for(i=0;i<size;i++)
	 {
	 	cin>>arr[i];
	 }
	 arr[0]=max;
	 for(i=1;i<size;i++)
	 {
	 	if((arr[i]>max))
	 	{
	 		max=arr[i];
		 }
		
	 }
	 for(i=0;i<size;i++)
	 {
	 	if(max==arr[i])
	 	{
	 		count++;
		 }
	 }
	 cout<<"MAX is ::"<<max<<endl;
	 cout<<count;
	 
	 return 0;
	 
	 
}
