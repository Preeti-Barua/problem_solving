#include<iostream>
using namespace std;
int main()
{
	 int A[10];
	 int i,n,sum=0;
	 cout<<"enter the size of the array:";
	 cin>>n;
	 
	 cout<<"enter the elements of the array:";
	 for(i=0;i<n;i++)
	 {
	 	cin>>A[i];
	 }
	 for(i=0;i<n;i++)
	 {
	 	sum=sum+A[i];
	 }
	 cout<<"the sum of the array is:"<<sum<<endl;
	 cout<<"the total number in the array are::"<<n<<endl;
	 cout<<"the average of the array is:"<<sum/n;
	 return 0;
	 
	
}
