#include<stdio.h>
void Queue(int x);
int DQueue(void);
void print(void);
static int rear=-1,front=-1;
int a[5];
main()
{
	int ch,i,x,p;
	while(1)
	{
		printf("1.Queue\t");
		printf("2.DQueue\t");
		printf("3.print\n");
		printf("Enter your choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:

					if(front==-1)
						front++;
				printf("Enter the element\n");
				scanf("%d",&p);
				Queue(p);
				break;
			case 2:
				if(rear!=front)
				{
				x=DQueue();
				printf("DQueue Elemet is = %d\n",x);
				}
				else
					printf("DQueue is underflow\n");
				break;
			case 3:
				printf("fornt=%d\t rear=%d\n",front,rear);
				if(front!=5)
				{
			 	for(i=front;i<rear;i++)
					printf("a[%d]= %d\n",i,a[i]);
				}
				else
					printf("There is no element available in stack!!!\n");
				break;
		}
	}
}

void Queue(int p)
{
				if((rear++)<4)
		       		{
   					a[rear]=p;
				}
				else 
					printf("Queue is overflow\n");
}
int DQueue(void)
{
	int ele;
	ele=a[front];
	++front;
	return ele;

//anather way to remove element.
//	ele=a[0];      //returning first element
//	for (i = 0; i < rear-1; i++)      //shifting all other elements
//	{
//		  a[i]= a[i+1];
//		    rear--;
//	}
}

