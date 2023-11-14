#include<stdio.h>  //passing pointer to a function
void swap1(int*,int*);
main()
{
	
	int a=8, b=9;
	swap1(&a,&b);
	printf("values of a and b after swap are : a= %d b= %d",a,b);
}
void swap1(int *x,int *y)
{
   int temp;
   int *ptemp= &temp;
   *ptemp=*x;
   *x=*y;
   *y=*ptemp;

}
