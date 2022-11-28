#include<stdio.h>

main()
{
	int i,n1,n2,j;
	
	printf("Enter the array size A :");
	scanf("%d",&n1);
	
	int a[n1],c[n1];
	
	for(i=0 ; i<n1 ; i++)
	{
		printf("Enter a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	printf("\n");
	for(i=0 ; i<n1 ; i++)
	{
		printf("a[%d] => %d\n",i,a[i]);
	}
	printf("\n---------\n");
	
	printf("Enter the array size B :");
	scanf("%d",&n2);
	
	int b[n2];
	
	for(i=0 ; i<n2 ; i++)
	{
		printf("Enter [%d] : ",i);
		scanf("%d",&b[i]);
	}
	printf("\n");
	for(i=0 ; i<n2 ; i++)
	{
		printf("b[%d] => %d\n",i,b[i]);
	}
	printf("\n---------\n");
	
	for(i=0 ; i<n1 ; i++)
	{
		c[i] = a[i];
	}
	printf("\n");
	for(i=0,j=n1 ; i<n2,j<n1+n2 ; i++,j++)
	{
		c[j] = b[i];
    }
		printf("\n\nMerge Array :\n");
		
		for(i=0 ; i<n1+n2 ; i++)
		{
			printf("c[%d] => %d\n",i,c[i]);
		}
	
	printf("\n---------\n");
}
