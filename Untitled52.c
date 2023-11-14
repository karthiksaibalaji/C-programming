 #include<stdio.h>
 #include<string.h>
 main()
 {
 	
 	//reverse the string
 	char str[20]="i am a student";
 	char temp;
 	int j, i=0;
 	j=strlen(str)-1;
 	   while(i<j)
 	   {
 	   	   
 	   	    temp=str[i];
 	   	    str[i]=str[j];
 	   	    str[j]=temp;
 	   	   
 	   	   
 	   	   i++;
 	   	   j--;
 	   	
 	   	
		}
 
 	printf("%s",str);
 }
