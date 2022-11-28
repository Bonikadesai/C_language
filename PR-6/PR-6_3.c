#include<stdio.h>
#include<string.h>

main()
{
	char str[100];
	int i,n;
	
	printf("Enter the string value : ");
	gets(str);
	
	n = strlen(str);
	
	for(i=0 ; i<n ; i++)
	{
		if(str[i]!=' ')
		{
			printf("%c",str[i]);
		}
	}
	printf("\n");
}
