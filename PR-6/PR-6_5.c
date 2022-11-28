#include<stdio.h>
#include<string.h>

main()
{
	int r,c,i,j,count=0;
	
	printf("Enter the string of Row : ");
	scanf("%d",&r);
	
	char str[r][100];

	for(i=0 ; i<r ; i++)
	{
			printf("Enter str[%d] : ",i);
			scanf("%s",&str[i]);
			count+=strlen(str[i]);
		
	}
	printf("Two-D Charcter : %d",count);
}
