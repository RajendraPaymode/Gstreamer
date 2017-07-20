#include<stdio.h>
main()
{
	int arr[]={1,2,3,4,5,5};
	printf("%d",*(&arr+1)-arr);
}
