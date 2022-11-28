#include<stdio.h>

 void addition(int a,int b)
 {
 	printf("Addition = %d",a+b);
 }
 
 void substraction(int a,int b)
 {
 	printf("Substraction = %d",a-b);
 }
 
  void multiplication(int a,int b)
 {
 	printf("Multiplication = %d",a*b);
 }
 
  void divison(int a,int b)
 {
 	printf("Divison = %d",a/b);
 }
 
  void moduls(int a,int b)
 {
 	printf("Moduls = %d",a%b);
 }
 
 void main()
 {

 
 	int m,n,i,type;
 	char choice;
 	do
 	{
 	printf("Press + for Addition \n");
 	printf("Press - for Substration \n");
 	printf("Press * for Multiplication \n");
 	printf("Press / for Divison \n");
 	printf("Press %% for Modul \n");
 	printf("Press 6 for exit\n");
 	fflush(stdin);
 	printf("Enter the operator:");
	scanf("%c", &choice);   
		
	
	switch(choice)		
	{
		case '+':
			printf("Enter the value of A:");
			scanf("%d",&m);
			printf("Enter the value of B:");
			scanf("%d",&n);
			addition(m,n);
			break;
			
		case '-':
			printf("Enter the value of A:");
			scanf("%d",&m);
			printf("Enter the value of B:");
			scanf("%d",&n);
			substraction(m,n);
			break;	
			
		case '*':
			printf("Enter the value of A:");
			scanf("%d",&m);
			printf("Enter the value of B:");
			scanf("%d",&n);
		    multiplication(m,n);
			
			break;
			
		case '/':
			printf("Enter the value of A:");
			scanf("%d",&m);
			printf("Enter the value of B:");
			scanf("%d",&n);
			divison(m,n);
		
			break;
			
		case '%' :
			printf("Enter the value of A:");
			scanf("%d",&m);
			printf("Enter the value of B:");
			scanf("%d",&n);
			moduls(m,n);
			
			break;
			
		case '6':
		   printf("Exit");
		   break;
		   			
		default :
		    printf("Invalid value:");
			break;
		
		}
		printf("\n");
		
	}while(choice!='6');
	
	}                                                                                                                                                                                                            
 
