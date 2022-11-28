#include<stdio.h>

void strtoggle(char *str)
{
	int i;
	for(i=0 ; i<str[i]!=NULL ; i++)
	{
		if(str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
		else if(str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
		}
	}
}
void main()
{
	char str[100];
	
	printf("Enter the charcter : ");
	gets(str);
	
	strtoggle(str);
	
	printf("Toggle case : %s",str);
}
