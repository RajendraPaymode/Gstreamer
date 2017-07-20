#include<stdio.h>
#include<string.h>
main()
{
	int i,j,len;
	char temp;
	char a[200];
	printf("Enter the string:");
	scanf("%s",a);
	len=strlen(a);
	for(i=0,j=len;i<j;i++,j--)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
        a[++len]='\0';
	printf("\nReverse string:");
	for(i=0;i<len;i++)
	printf("%c",a[i]);
	printf("\n");
}
