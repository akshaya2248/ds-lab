//queue
#include<stdio.h>
#define max 4
int queue[max];
int front=-1;
int rear=-1;
int data;
int choice;

void enqueue(int data)
{
	if(rear==max-1)
	{	
		printf("the queue is full.\n");
	}
	else	
	{
		if((rear==-1)&&(front==-1))
		{
			front=front+1;
			rear=rear+1;
		}
		else
		{
			rear=rear+1;
		}
		queue[rear]=data;
	}
}
void dequeue()
{
	if(front==-1)
	{
		printf("queue is empty\n");
	}
	else
	{
		data=queue[front];
		if(front==rear)
		{
			front=-1;
			rear=-1;
		}
		else
		{
			front=front+1;
		}
		printf("the deleted item is:%d\n",data);
	}
}
void print()
{
	if((front==-1)&&(rear==-1))
	{
		printf("there is no element in queue:\n");
	}
	else
	{
		printf("the elements in queue:\n");
		for(int i=front;i<=rear;i++)
		{
			printf("%d\n",queue[i]);
		}
	}
}
int main()
{
	do
	{
		printf("\n1.ENQUEUE\n");
		printf("2.DEQUEUE \n");
		printf("3.PRINT ALL ELEMENTA IN QUEUE:\n");
		printf("4.EXIT \n");
		printf("ENTER YOUR CHOICE:\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			{
				printf("ENTER THE VALUE OF ENQUEUE:");
				scanf("%d",&data);
				enqueue(data);
				break;
			}
			case 2:
			{
				dequeue();
				break;
			}
			case 3:
			{
				print();
				break;
			}
			case 4:
			{
				printf("exit");
				break;	
			}
                        default:
				printf("invalid option");
		}
	}
while(choice!=4);
return 0;
}


