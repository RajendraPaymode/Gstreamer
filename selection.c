#include<stdio.h>
main()
{
	int i,j,temp,len;
	int a[]={9,8,7,6,5,4,2,1,3};
	len=(sizeof(a)/sizeof(a[0]));
	for(i=0;i<len;i++)
	{
		for(j=i+1;j<len;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<len;i++)
		printf("%d\t",a[i]);
}
