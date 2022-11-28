#include<stdio.h>

main()
{
	int i,j,r,c,sum=0;
	
	printf("Enter an array size of Row Element\t : ");
	scanf("%d",&r);
	printf("Enter an array size of Column Element\t : ");
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
		}
		printf("\n");
	}
	
	printf("\n");
	
	for(i=0 ; i<r ; i++)
	{
		sum=0;
		for(j=0 ; j<c ; j++)
		{	
		   sum = sum + a[j][i];	 		    
		}
		printf("Array of Column wise Sum a[%d] : %d\n",j,sum);
	}
	
	
}
