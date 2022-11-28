#include<stdio.h>
#include<string.h>

 void findlength(char n[])
 {
 	printf("Length is %d",strlen(n));
 }
 
 void main()
 {
 	char name [100];
 	int count=0;
 	
 	 printf("Enter your name:");
 	 scanf("%s",&name);
 	 
 	 findlength(name);
 }

