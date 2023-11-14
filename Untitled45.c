#include<stdio.h>
#include<stdlib.h>
main()
{
	int *p , n, i;
	n=5;// the int type values you want to use
	p=(int *) malloc(n*(sizeof(int)));        //       using malloc
		p=(int*) calloc(n,sizeof(int)); //tbhis one is using calloc
	if(p==NULL)
	{
		printf(" not sufficient memory");
		exit(1);
		
	}
	   else
	{ 
	   printf("enter values to be done by DMA \n");
	     for(i=0;i<n;i++)
	     {
	     	scanf("%d",p+i);
		 }
		 
		  
	     for(i=0;i<n;i++)
	     {
	     	scanf("%d",(p+i ));
		 }
	}
	   
	
	
	
}
