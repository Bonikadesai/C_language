#include<stdio.h>

main()
{
	char n;
	
	printf("Enter char : ");
	scanf("%c",&n);
	
	if(n>=97 && n<=122)
	{
		printf("lower case..\n");
	}
	
	else
	{
		printf("Invalid case..\n");
	}
	printf("Char : %c",n);
}
