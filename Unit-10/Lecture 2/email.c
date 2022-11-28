#include<stdio.h>
#include<string.h>

void main()
{
	char email[100];
	int lw=0,at=0,dot=0,dg=0,up=0,sc=0,sp=0,i,dp=0,ap=0;
	
	printf("Enter your email : ");
	gets(email);
	
	for(i=0 ; i<strlen(email) ; i++)
	{
		if(email[i]>='a' && email[i]<='z')
		{
			lw++;
		}
		else if(email[i]=='@')
		{
			at++;
			ap = i;
		}
		else if(email[i]=='.')
		{
			dot++;
			dp = i;
		}
		else if(email[i]>='0' && email[i]<='9')
		{
			dg++;
		}
		else if(email[i]>='A' && email[i]<='Z')
		{
			up++;
		}
		else if(email[i]==' ')
		{
			sp++;
		}
		else
		{
			sc++;
		}
	}
	
	if(lw>0 && at==1 && dot>0 && up==0 && sp==0 && sc==0 && (dp==strlen(email)-3) || (dp==strlen(email)-4) && dp-ap>=3 && ap>=3)
	{
		printf("Vaild Email\nLOG IN SUCCESSFULLY..");
	}
	else
	{
		printf("Invalid Email..\n");
		printf("Lower\t: %d\n@\t: %d\nDot\t: %d\nDigit\t: %d\nUper\t: %d\nSC\t: %d\nSpace\t: %d\n",lw,at,dot,dg,up,sc,sp);
	}
}
