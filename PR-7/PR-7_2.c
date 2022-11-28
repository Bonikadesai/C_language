#include<stdio.h>
void sum(int b[],int m)
{
	int i, sum=0;
	
	for(i=0; i<m; i++)
	{
		sum = sum + b[i];
	}
	printf("Sum of Array: %d", sum);
}

void main()
{
	int a[100], i, n;
	
	printf("Enter the size:");
	scanf("%d", &n);
	
	for(i=0; i<n; i++)
	{
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
	
	sum(a, n);
}


