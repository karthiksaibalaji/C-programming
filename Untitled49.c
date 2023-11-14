#include<stdio.h>
#include<string.h>
 struct student
 {
 	char name[20];
 	int rollno;
 	float fee;
 };
 main()
 {
  int a; 
  struct student s1,s2;
  s1.rollno=12;
  s1.fee=30000;
  strcpy(s1.name,"aman");
  strcpy(s2.name,"aryan");
  s2.fee=80000;
  s2.rollno=30;
  printf("the student details are: %s %d %f",s1.name,s1.rollno,s1.fee);
 	
 	
 }


