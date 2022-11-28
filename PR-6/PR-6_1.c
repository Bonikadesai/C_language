#include<stdio.h>
#include<string.h>

main()
{
	char str[100];
	int i,j,count=0,n;
	
	printf("Enter the string value : ");
	gets(str);
	
	n = strlen(str);
	
	for(i=0 ; i<n ; i++)
	{
		count = 1;
		if(str[i])
		{
			for(j=i+1 ; j<n ; j++)
			{
				if(str[i] == str[j])
				{
					count++;
					str[j] = '\0';
				}
			}
			printf("%c Occurs %d times \n",str[i],count);
		}
	}
}
