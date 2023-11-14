#include<stdio.h>
#include<string.h>
struct book
   {
   	  char bname[20];
   	  int page;
   	  float price;
   	
   };
main()
{
	struct book mybook[100];
	int i, n;
	n=3; // number of records
for(i=0;i<n;i++)
{
	printf("enter book name \n");
	 gets(mybook[i].bname);
	fflush(stdin);
scanf("%d",&mybook[i].page);
    fflush(stdin);	 
 }
for(i=0;i<n;i++)
{
	
	printf("name of the book: %s \n",mybook[i].bname);
	 printf("pages of the book: %d \n",my book[i].bname);
	
	
	
	
	
	
	
	
	}	
}
