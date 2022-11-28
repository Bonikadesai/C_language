#include<stdio.h>

main()
{
	int i,j,n,k,temp;
	
	printf("Enter the array size : ");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0 ; i<n ; i++)
	{
		printf("Enter a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\n\nLeft Rotate..\n");
	
	for(i=n-1 ; i>=0 ; i--)
	{
		printf("%d ",a[i]);
	}
	
	printf("\n\nRight Rotate..\n");
	
	for(i=0 ; i<n ; i++)
	{
		printf("%d ",a[i]);
	}
}
