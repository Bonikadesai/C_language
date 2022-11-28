#include<stdio.h>

void main()
{
	int a[100],i,n;
	
	printf("Enter the array of element : ");
	scanf("%d",&n);
	
	int *p[100];
	
	for(i=0 ; i<n ; i++)
	{
		printf("Enter a[%d] : ",i);
		scanf("%d",&a[i]);
		p[i] = &a[i];
	}
	
	for(i=0 ; i<n ; i++)
	{
		printf("a[%d] : %d\n",i,*p[i]);
	}
}
