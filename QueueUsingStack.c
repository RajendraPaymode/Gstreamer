#include<stdio.h>
void Queue(int );
int DQueue(void);
int a[5],b[5];
int top1=-1;
int top2=-1;
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
				printf("Enter the element\n");
				scanf("%d",&p);
				Queue(p);
				break;
			case 2:
				if(top2!=-1)
				{
				x=DQueue();
				printf("DQueue Elemet is = %d\n",x);
				}
				else
					printf("DQueue is underflow\n");
				break;
			case 3:
				if(top2!=-1)
				{
			 	for(i=top2;i>-1;i--)
					printf("b[%d]= %d\n",i,b[i]);
				}
				else
					printf("There is no element available in Queue!!!\n");
				break;
		}
	}
}
void Queue(int p)
{
	if(top1<4)
	{
	int i,j=0;
	a[++top1]=p;
	top2++;
	for(i=top1;i>-1;i--)
		b[j++]=a[i];
	}
	else
		printf("Queue is Overflow\n");
}
int DQueue(void)
{
	int ele;
	ele=b[top2];
	top2--;
	return ele;
}

