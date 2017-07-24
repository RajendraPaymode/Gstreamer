#include<stdio.h>
#include<string.h>
 void reverse(char str[],int m,int last);
main()
{
	int i,j,len,last=0;
	char temp;
	 char str[200];
	printf("Enter the string:");
	gets(str);
	len=strlen(str);
	reverse(str,0,--len);
        str[++len]='\0';
	printf("\nReverse string: ");
	for(i=0;str[i];i++)
	printf("%c",str[i]);
	printf("\n");
	printf("\n Reversing Word by Word\n");

	for(i=0;i<len;i++)
	{      
		while((str[i]!=32)&&(str[i]!='\0'))
		{
			i++;			
		}
		--i;
		reverse(str,last,i);
		if(str[i++]!='\0')
		{
			last=i+1;
			
		}
	        else
		{
        	str[++len]='\0';
		break;
	    	}

	}
	for(i=0;i<len;i++)
	printf("%c",str[i]);
	printf("\n");
}
 void reverse(char str[],int m,int end)
{
	int i,j;
	    char temp;
		for(i=m,j=end;i<j;i++,j--)
		        {
			 temp=str[i];
			 str[i]=str[j];
			 str[j]=temp;
			}
}


