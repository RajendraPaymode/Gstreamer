#include<stdio.h>
main()
{
	int a[10]={5,-12,7,-41,6,-9,5,-1,33,11};
	int i,j,temp;
	printf("Unsorted positive and negative number\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);

	}

	printf("\nSorted positive and negative number\n");
	for(i=0,j=9;i<j;)
	{
		if(a[i]<-1)
			i++;
		if(a[i]>=a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			i++;
			j--;
		}

		if(a[j]>-1)
			j--;
   	}
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
}



