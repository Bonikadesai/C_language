#include<stdio.h>

main()
{
	char str[100];
	int i;
	
	printf("Enter Charcter : ");
	scanf("%s",&str);
	
	for(i=0 ; str[i]!='\0'; i++)
	{
		if(str[i]>=65 && str[i]<=90)
		{
			str[i] += 32;
		}
		else if(str[i]>=97 && str[i]<=122)
		{
			str[i] -= 32;
		}
	}
	
	printf("Toggle case : %s",str);
}

