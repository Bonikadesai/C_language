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
			if(i==0 || i==r-1 || j==0 || j==c-1)
			{
			    printf("%d",a[i][j]);	
			    sum = sum + a[i][j];	 		    
			} 
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("\nArray of Boundary Elemnets Sum : %d\n",sum);
	
	
	
}
