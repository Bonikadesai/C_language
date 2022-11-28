#include<stdio.h>

void cube(int a)
{
	printf("Cube is %d",a*a*a);
}
void main()
{
	int n;
	printf("Enter any number:");
	scanf("%d",&n);
	cube(n);
}
 
