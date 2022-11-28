#include<stdio.h>

main()
{
	char i,j,k;
	for(i='A' ; i<='E' ; i++)
	{
		for(k='E' ; k>i ; k--)
		{
			printf(" ");
		}
		for(j=i ; j>='A' ; j--)
		{
			printf("%c",j);
		}
		printf("\n");
	}
}
