//pointer to 1 d array
#include<stdio.h>
main()
{
	int a[5];
	int *p, i;
p=a;

printf("enter the elements");
    for(i=0;i<5; i++)
    {
    	scanf("%d",&a[i]);
	}

	for(i=0;i<5; i++)
    {
    	printf("%d\n",a[i]);
	}
	
	
	
}
