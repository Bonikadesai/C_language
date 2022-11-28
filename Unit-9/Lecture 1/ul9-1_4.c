#include<stdio.h>

main()
{
	int i,n;
	
	printf("Enter an Array size :");
	scanf("%d",&n);
	
	int a[n],b[n],c[n];
	
	for(i=0 ; i<n ; i++)
	{
		printf("Enter a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	printf("\n");
	for(i=0 ; i<n ; i++)
	{
		printf("a[%d] => %d\n",i,a[i]);
	}
	printf("\n---------\n");
	for(i=0 ; i<n ; i++)
	{
		printf("Enter b[%d] : ",i);
		scanf("%d",&b[i]);
	}
	printf("\n");
	for(i=0 ; i<n ; i++)
	{
		printf("b[%d] => %d\n",i,b[i]);
	}
	printf("\n---------\n");
	for(i=0 ; i<n ; i++)
	{
		c[i] = a[i] + b[i];
	}
	for(i=0 ; i<n ; i++)
	{
		printf("c[%d] => %d\n",i,c[i]);
	}
}
