#include<iostream>
using namespace std;
int main()
{
	int arr[]={3,4,6,2,1,8,9};
	int i,flag=0,temp=0;
	cout<<"the array is::";
	for(i=0;i<7;i++)
	{
		cout<<arr[i];
		
	}
	i=0;
	while(i<6)
	{
                                      if(arr[i]<arr[i+1])
                                      {
                                      	flag++;
	                  }
	                  else if(arr[i]>arr[i+1])
                                      {
                                      	flag--;
	                  }
	                  else
	                  {
	                  	temp=arr[i];
	                  	arr[i]=arr[i+1];
	                  	arr[i+1]=temp;
	                  }
	                  
	i++;	
		
		
	}
	
			
	
	
	cout<<arr[i];
	
	return 0;
}
