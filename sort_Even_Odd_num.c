#include<stdio.h>
main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int i,j,temp;
	printf("Unsorted Even and Odd number\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);

	}

	printf("\nSorted Even and Odd number\n");
	for(i=0,j=9;i<j;)
	{
		if((a[i]%2)==0)
			i++;
		if(((a[i]%2)!=0)&&((a[j]%2)==0))
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			i++;
			j--;
		}

		if((a[j]%2)!=0)
			j--;
   	}
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
}



