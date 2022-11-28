#include<stdio.h>

main()
{
	int i,n,length=0;
	
	printf("Enter an Element Size :");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0 ; i<n ; i++)
	{
		printf("Enter a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	printf("\n");
	for(i=0 ; i<n ; i++)
	{
		printf("a[%d] : %d\n",i,a[i]);
		length++;
	}
	printf("Array of Length is : %d",length);
}
