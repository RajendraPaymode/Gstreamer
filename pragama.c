#include<stdio.h>
 
void func1();
void func2();
 
void __attribute__ ((constructor)) func1();
void __attribute__ ((destructor)) func2();
 
void func1()
{
	    printf("Inside func1()\n");
}
 
void func2()
{
	    printf("Inside func2()\n");   
}

struct tag
{

int b;
//static int c;

}
main()
{
	    printf("Inside main()\n");
	         
//	        return 0;
}
