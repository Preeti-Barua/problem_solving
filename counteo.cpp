#include<stdio.h>

int main()
{
	int i=1;
	int even=0,odd=0;
	while(i<=15)
	{
		if(i%2==0)
		{
			even++;
			
		}
		else if(i%2==1)
		{
			odd++;
			
		}
		i++;
	}
	printf("total of even number is:%d\n",even);
	printf("total of odd number is:%d\n",odd);

	return 0;
	
}
