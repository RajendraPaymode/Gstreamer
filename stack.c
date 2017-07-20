#include<stdio.h>
void push(int x);
int pop(void);
void print(void);
static int m=-1;
int a[5];
main()
{
	int ch,i,x,p;
	while(1)
	{
		printf("1.Push\t");
		printf("2.Pop\t");
		printf("3.print\n");
		printf("Enter your choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				if(m<4)
		       		{
				printf("Enter the element\n");
				scanf("%d",&p);
				push(p);
				}
				else 
					printf("Stack is overflow\n");
				break;

			case 2:
				if(m!=-1)
				{
				x=pop();
				printf("Pop Elemet is = %d\n",x);
				}
				else
					printf("Stack is underflow\n");
				break;
			case 3:
				if(m!=-1)
				{
			 	for(i=m;i>-1;i--)
					printf("a[%d]= %d\n",i,a[i]);
				}
				else
					printf("There is no element available in stack!!!\n");
				break;
		}
	}
}

void push(int p)
{
   a[++m]=p;
}
int pop(void)
{
	int ele;
	ele=a[m];
	m--;
	return ele;
}

