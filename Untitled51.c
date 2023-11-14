#include<stdio.h> //array inside structure
struct result
{
char name[20];
int regno;
};

main()
{
  
   struct student s1={"abc",1};
   printf("%d\n",s1.regno);
     printf("%s\n",s1.name);  
     printf("%d\n",s1.sizeof(s1));
};


