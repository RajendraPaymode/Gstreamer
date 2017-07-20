#include<stdio.h>
#include<string.h>
main()
{
	int i,j,len;
	char str[200];
	printf("\n Enter the string:");
	scanf("%s",str);
	len=strlen(str);
	for(i=0,j=len-1;i<j;i++,j--)
	{
		if(str[i]!=str[j])
		{
			break;
		}
        }
	printf("\ni=%d,j=%d\n",i,j);
	if(i>=j)
	  printf("\nThe given string is  polimdrome\n");
	else
		printf("Not polimdrome\n");
}
