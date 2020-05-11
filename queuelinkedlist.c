#include<stdio.h>
#include<stdlib.h>
 struct node{
 	int data;
 	struct node *next;
 };
 struct node *front=0;
 struct node * rear=0;
  void insert();
  void deletee();
  void display();
  
  void main()
  {
  	int choice;
  	while(choice!=3)
  	{
  		printf("1. insert data in queue.\n"
	                            "2. delete data from queue. \n"
	                              "3. display data of queue. \n");
	         printf("enter the choice");
	         scanf("%d",&choice);
	         switch(choice)
	         {		case 1:{ insert();
			break;
		}
		case 2:{deletee();
			break;
		}
		case 3:{display();
			break;
		}
		default:{
			printf("enter within the choice::");
			break;
		}
	};
	}
  }
  void insert()
  {
  	int item;
  	struct node *ptr;
  	ptr=(struct node*)malloc(sizeof(struct node));
  	printf("enter the data:");
	scanf("%d",&item);
  	ptr->data=item;
  	ptr->next=NULL;
  	if(front==0 && rear==0)
  	
  	{
  		front=rear=ptr;
		  	
	  }
	  else
	  {
	  	rear->next=ptr;
		  rear=ptr;	
	  }
	  
	  	
	  }
  void display()
  {
  	struct node*temp;
  	if(front==0 && rear==0)
  	{
  		printf("******queue is empty*****\n\n\n\n");
	  }
	  else
	  {
	  	temp=front;
	  	while(temp!=0)
	  	{
	  		printf("%d",temp->data);
	  		temp=temp->next;
		  }
		  
	  }
}
void deletee()
{
	struct node *temp;
	temp=front;
	if(front==0&&rear==0)
	{
		printf("---------underflow\n");
		
	}
	else
	{
		printf("%d",front->data);
	  front=front->next;
	  free(temp);	
	}
	
}
  	
  
