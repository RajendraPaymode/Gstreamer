#include<stdio.h>
void QuickSort(int a[],int ,int );
int partition(int a[],int , int );
main()
{
	int a[]={9,8,7,5,41,254,1,2,3},i;
	int len=(sizeof(a)/sizeof(a[0]));
	printf("Length=%d",len);
        QuickSort(a,0,len);
	printf("\nSorted array is:\n");
	for(i=0;i<len;i++)
	{
		printf("%d\t",a[i]);
	}
}

void QuickSort(int a[],int start,int end)
{
	int part;
	if(start<end)
	{
		part=partition(a,start,end);
		QuickSort(a,start,part-1);
		QuickSort(a,part+1,end);
	}
}
int partition(int a[],int start,int end)
{
	int i,pivot,temp;
	int index;
	index=start;
	pivot=a[end];
	for(i=start;i<end;i++)
	{
		if(a[i]<=pivot)
		{
			temp=a[i];
			a[i]=a[index];
			a[index]=temp;
			index++;
		}

	}
	temp=a[end];
	a[end]=a[index];
	a[index]=temp;
	return index;
}



