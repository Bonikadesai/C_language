#include<stdio.h>

main()
{
	char str[100];
	int i;
	
	printf("Enter Charcter : ");
	scanf("%s",&str);
	
	for(i=0 ; str[i]!='\0'; i++)
	{
		str[i] += 32;
	}
	
	printf("lower case : %s",str);
}

