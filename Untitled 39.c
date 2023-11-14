#include<stdio.h>
main()
{
	
	int a;
	int *ptr;
	a=7;
	ptr=&a;
	*ptr=79;
	printf("enter the value of a");
	scanf("%d",ptr);
	
	
	printf("a is %d",a);
	printf("address of a is %u", &a);
	printf("address of a is %u",ptr);
	 printf("check value of a through ptr %d",ptr);
	 printf("\n address of pointer ptr is %u",&a);
	
	
	
	
}




