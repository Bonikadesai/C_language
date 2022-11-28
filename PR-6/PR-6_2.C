#include<stdio.h>
#include<string.h>

main()
{
	char str[100],n[100];
	int i,m,k;
	
	printf("Enter the string value : ");
	gets(str);
	
	strcpy(n,str);
	strrev(n);
	k = strcmp(str,n);
	
	if(k==0)
	{
		printf("%s String is Palindrome..",str);
	}
	else
	{
		printf("%s String is Not Palindrome..",str);
	}
}
