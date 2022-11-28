#include<stdio.h>
#include<string.h>

main()
{
	char str[100];
	int i,j,k,n;
	
	printf("Enter the string value : ");
	gets(str);
	
	n = strlen(str);
	
	for(i=0 ; i<n ; i++)
	{
		for(j=i+1 ;str[j]!='\0' ; j++)
		{
			if(str[i]==str[j])
			{
				for(k=j ; str[k]!='\0' ; k++)
				{
					str[k] = str[k+1];
				}
			}
		}
	}
	printf("String remove duplicate charcter : %s\n",str);
}
