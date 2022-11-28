#include<stdio.h>

main()
{
	char n;
	
	printf("Enter char : ");
	scanf("%c",&n);
	
	if(n>=65 && n<=90)
	{
		printf("UPPER CASE..\n");
	}
	
	else
	{
		printf("Invalid case..\n");
	}
	printf("Char : %c",n);
}
