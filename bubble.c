#include<stdio.h>
main()
{

	int i,j,len,temp,flag=0;
	//int a[]={5,6,8,93,1,12,7,9,3,4,645};
	int a[]={1,2,3,4,5,6,7,8,9};
	len=(sizeof(a)/sizeof(a[0]));
	for(i=0;i<len;i++)
	{
		for(j=0;j<len-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				flag=1;
			}
		}
			if(flag==0)
			{
				printf("List is allready in sorted order\n");
				return;
			}
	}
	for(i=0;i<len;i++)
		printf("%d\t",a[i]);
}
