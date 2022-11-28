#include<stdio.h>

int fact (int n)
{
	if(n<=1)
	{
		return 1;
	}
	else
	{
		return n * fact(n-1);
	}
}

void main()
{
	int n;
	
	printf("Enter Your nober : ");
	scanf("%d",&n);
	
	printf("Fact : %d",fact(n));
}

