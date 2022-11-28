#include<stdio.h>

main()
{
	int i,j,r1,c1,r2,c2;
	
	printf("Enter the Array of Row size A\t :");
	scanf("%d",&r1);
	printf("Enter the Array of Column size A :");
	scanf("%d",&c1);
	
	printf("Enter the Array of Row size B\t :");
	scanf("%d",&r2);
	printf("Enter the Array of Column size B :");
	scanf("%d",&c2);
	
	int a[r1][c1],b[r2][c2],c[r1][c1];
	
	for(i=0 ; i<r1 ; i++)
	{
		for(j=0 ; j<c1 ; j++)
		{
			printf("Enter a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n");
	
	for(i=0 ; i<r1 ; i++)
	{
		for(j=0 ; j<c1 ; j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n--------------\n");
	
	for(i=0 ; i<r2 ; i++)
	{
		for(j=0 ; j<c2 ; j++)
		{
			printf("Enter b[%d][%d] : ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("\n");
	
	for(i=0 ; i<r2 ; i++)
	{
		for(j=0 ; j<c2 ; j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	
	printf("\n--------------\n");
	
	for(i=0 ; i<r1 ; i++)
	{
		for(j=0 ; j<c1 ; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	
	printf("\n");
	
	for(i=0 ; i<r1 ; i++)
	{
		for(j=0 ; j<c1 ; j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	
	printf("\n--------------\n");
}
