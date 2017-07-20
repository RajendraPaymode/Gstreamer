#include<stdio.h>
main()
{
	int i,j,temp,len,m;
	int a[]={9,8,7,4,5,6,3,1,2};
	len=(sizeof(a))/sizeof(a[0]);
	for(i=1;i<len;i++)
	{
		m=i;
		for(j=i-1;j>0;j--)
		{
			if(a[m]<a[j])
			{
				temp=a[m];
				a[m]=a[j];
				a[j]=temp;
				m--;
			}
		}
	}
	for(i=0;i<len;j++)
	printf("%d\t",a[i]);
}

