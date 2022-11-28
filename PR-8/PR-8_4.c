#include<stdio.h>

void main()

{

	char a[100];

	char *str=a;

	int count=0,i;	

	printf("Enter the string: ");

	gets(a);	

	for(i=0 ; *str!='\0' ; i++)

	{

		count++;

		str++;

	}	

	printf("Length of string : %d",count);

}
