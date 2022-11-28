#include<stdio.h>

void strTitle(char *str)
{
	int i;
	
    if(str[0] >= 97 && str[0] <= 122)
	{
		str[0] -= 32;
	}
		
	for(i=1 ; i<str[i]!=NULL ; i++)
	{
		if(str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
	}
}
void main()
{
	char str[100];
	
	printf("Enter the charcter : ");
	gets(str);
	
	strTitle(str);
	
	printf("Title case : %s",str);
}
