#include<stdio.h>

void main()
{
	int a;
	
	printf("Enter the value : ");
	scanf("%d",&a);
	
	int *b = &a;
	
	printf("Value of A : %d\n",*b * *b);
}
