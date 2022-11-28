#include<stdio.h>
#include<string.h>

main()
{
	char pass[100];
	int  up=0,lw=0,dg=0,sm=0,sp=0,len,i;
	
	printf("Enetr Your Password : ");
	gets(pass);
	
	len = strlen(pass);
	
	for(i=0 ; i<strlen(pass) ; i++)
	{
		if(pass[i]>='A' && pass[i]<='Z')
		{
			up++;
		}
		else if(pass[i]>='a' && pass[i]<='z')
		{
			lw++;
		}
		else if(pass[i]>='0' && pass[i]<='9')
		{
			dg++;
		}
		else if(pass[i]==' ')
		{
			sp++;
		}
		else
		{
			sm++;
		}
	}
	
	if(up>0 && lw>0 && dg>0 && sp==0 && len>=6 && sm>0)
	{
		printf("Your Password is valid...\n");
	}
	else
	{
		printf("Your Password is Invalid..\n");
		printf("Lower\t: %d\nDigit\t: %d\nUper\t: %d\nSymbol\t: %d\nSpace\t: %d\n",lw,dg,up,sm,sp);
	}
	
	printf("Passwor is : %s",pass);
}
