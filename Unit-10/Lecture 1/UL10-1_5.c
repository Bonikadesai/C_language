#include<stdio.h>

main()
{
	char str[100];
	int i;
	
	printf("Entre Charcter : ");
	scanf("%s",str);
	
	if(str[0]>=97 && str[0]<=122)
	{
		str[0] -= 32;
	}
	
	for(i=1 ; str[i]!=NULL ; i++)
	{
		if(str[i]>=65 && str[i]<=90)
		{
			str[i] += 32;
		}
	}
	
	printf("Title case : %s",str);	
}
