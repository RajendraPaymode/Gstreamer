#include<stdio.h>
main()
{
	int a[10]={0,1,0,1,0,0,1,1,0,1};
	int i,j,temp;
	printf("Unsorted 1's and 0's\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);

	}

	printf("\nSorted 1's and 0's\n");
	for(i=0,j=9;i<j;)
	{
		if(a[i]==0)
			i++;
		if(a[i]!=a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			i++;
			j--;
		}

		if(a[j]==1)
			j--;
   	}
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
}



