#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main()
{
	int l,i,j,total,m=0;
	char *p[500],*H,*F,arr[2];
	char str[] = "abcacdcacabacaassddssklac";
	printf("Original string=%s\n",str);
	l=strlen(str);
	char *D;
	for(i=0;i<l;i++)
	{
		for(j=i+1;j<l;j++)
		{
                        p[m]=(char *)malloc(2*sizeof(char));
			arr[0]=str[i];
			arr[1]=str[j];
			strcpy(p[m],arr);
			m++;
		}
	}
	
	for(i=0;i<m;i++)
	{
		printf("%s\t",p[i]);
	}
	for(i=0;i<m;i++)
	{
		total=0;
		for(j=i+1;j<m;j++)
		{
			if((strcmp(p[i],p[j])==0))
					{
						total++;				
					}
			
		}
		printf("%s=%d\t",p[i],--total);
	}
}
