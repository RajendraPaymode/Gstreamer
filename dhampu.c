#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
	    int *ptr = (int*)malloc(10);
		free(ptr);
   		ptr=NULL;		
	        return 0;
}
