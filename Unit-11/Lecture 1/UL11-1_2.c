#include<stdio.h>

void divisible(int a)
{
	if(a%3==0 && a%5==0)
	{
		printf("Number is Divisiable :");
	}
	else
	{
		printf("Number is Not Divisiable :");
	}
}
void main()
{
	int n;
	printf("Enter any number:");
	scanf("%d",&n);
	divisible(n);
}
