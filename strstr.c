#include<stdio.h>
main()
{

	int i,j;
	char s1[100],s2[100];
	int temp=0;

	printf("Enter the first string\n");
	gets(s1);
	printf("Enter the 2nd string\n");
	gets(s2);

	for(i=0;s1[i];i++)
	{
		j=0;
		if(s2[0]==s1[i])
		{
			for(j=1;s2[j];j++)
			{
				if(s2[j]!=s1[i+j])
				{
					break;
				}
			}
		}
		if(s2[j]=='\0')
		{
			temp=1;
			printf("String is present at s1[%d] position\n",i);
		}
	}
		if(temp==0)
			printf("String s2 is  not available in s1\n");
}
