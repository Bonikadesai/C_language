#include<stdio.h>

main()
{
	int i,j,r,c,length=0;
	
	printf("Enter the Array of Row size\t :");
	scanf("%d",&r);
	printf("Enter the Array of Column size\t :");
	scanf("%d",&c);
	
	int a[r][c];
	
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
			printf("Enter a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n");
	
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
			printf("%d ",a[i][j]);
			length++;
		}
		printf("\n");
	}
	printf("\nArray of Length : %d",length);
}
