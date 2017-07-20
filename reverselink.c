#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct Node 
{
	int data;
	struct Node *next;
};
struct Node* createLink(struct Node *Head)
{
	struct Node *temp=NULL;
	if(Head==NULL)
	{
		
		temp=(struct Node *)malloc(sizeof(struct Node));
		scanf("%d",&(temp->data));
		temp->next=NULL;
		Head=temp;
		return Head;
	}
	else{
		temp=(struct Node *)malloc(sizeof(struct Node));
		scanf("%d",&(temp->data));
		temp->next=Head;
		Head=temp;
		return Head;
	}
}
void display(struct Node *Head,int n)
{
	struct Node *temp=NULL;    
	int i;	
	temp=Head;
	for(i=0;i<n-1;i++)
	{
		printf("%d->",temp->data);
		temp=temp->next;
	}
	printf("%d\n\n",temp->data);
}
struct Node* reverse(struct Node *Head,int n)
{
	struct Node *temp,*prev=NULL,*nxt;
	temp=Head;
	while(temp)
	{
		nxt=temp->next;
		temp->next=prev;
		prev=temp;
		temp=nxt;
	}
	Head=prev;
	return Head;

}
	struct Node *Head=NULL;
main()
{
	int n,i;
	printf("\nHow many number of element:");
	scanf("%d",&n);
	printf("\nEnter the data\n");
	for(i=0;i<n;i++)
	{
	   Head=createLink(Head);
	}
	display(Head,n);
	Head=reverse(Head,n);
	printf("\nReverse link list is:\n");
	display(Head,n);
}
		
		
		
		
		
		
		
		
		
		
