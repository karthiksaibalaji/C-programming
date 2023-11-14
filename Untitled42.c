#include<stdio.h>
main()
{
	int x=10;
	char ch='A';
	void *ptr;
	ptr=&x;
	
	printf(" the value of ptr %d",*(int*)ptr);
	
	
	ptr=&ch;
	printf("the value of ptr %c",*(char*)ptr);

	
	
	
	
	
}
