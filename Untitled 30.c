#include<stdio.h>
main()
{
	
	int arr[10],sum=0, s=0,i, smallest;
	for (i=0;i<4;i++)
	{
		printf("enter values\n");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<4;i++)
	{
		if (arr[i]%2==0)
		{
			printf("\n even number is");
			printf("\n%d",arr[i]);
			sum=sum+arr[i];
		}
		else
		{
			printf("\n odd number is");
			printf("\n%d",arr[i]);
			s=s+arr[i];
		}
		
		printf("\n sum of even numbers is %d",sum);
		printf("\n sum of odd numbers is %d",s);
		
		smallest=arr[0];
		
	}
	
	
	
	
	
	
	
	
	
	
}
