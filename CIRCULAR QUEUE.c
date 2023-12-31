//CIRCULAR QUEUE
#include<stdio.h>
#include<stdlib.h>
void enqueue();
void dequeue();
void display();
int front=-1,rear=-1,item,size=4,a[10];
void main()
{
	int opt;
	do
	{
	printf("\n1.insertion\n 2.deletion\n 3.display\n 4.exit\n enter your option\n ");
	scanf("%d",&opt);
	switch(opt)
		{
			case 1:enqueue();
			break;
			case 2:dequeue();
			break;
			case 3:display();
			break;
			case 4:exit(0);
			break;
			default:printf("\ninvalid entry\n");
		}
	}
while(opt!=4);
}

void enqueue()
{
	if(front==(rear+1)%size)
	{
		printf("circular queue is full");
	}
	else
	{
		printf("\nenter the item\n");
		scanf("%d",&item);

		if(front==-1 && rear==-1)
		{
			front=0;
			rear=0;
			a[rear]=item;
		}
		else
		{
			rear=(rear+1)%size;
			a[rear]=item;
		}
	}
}
void dequeue()
{
	if(front==-1)
	{
		printf("no elements to be delected");
	}
	else if(front==rear)
	{
		printf("\nthe element to be deleted in %d\n",a[front]);
		front=rear=-1;
	}
	else
	{
		printf("\nthe element to be deleted is %d\n",a[front]);
		front=(front+1)%size;
	}
}
void display()
{
    int temp;
    temp=front;
    if((temp==-1)&&(rear==-1))
    {
        printf("circular queue is empty");
    }
    else
    {
        printf("\ncircular queue elements are\n");
        while(temp!=rear)
        {
            printf("%d\n",a[temp]);
            temp=(temp+1)%size;
        }
	printf("%d\n",a[temp]);	
    }
}
