#include<stdio.h>
void main()
{
	int rem,rev=0,n,i;
	int a[100];
	
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
		rev=0;
	  while(*p[i]!=0)
	  {
		rem = *p[i] % 10;
		rev = rev * 10 + rem;
		*p[i] = *p[i] / 10;
	  } 
	 *p[i] = rev;
    }
	
	for(i=0 ; i<n ; i++)
	{
		printf("a[%d] : %d\n",i,*p[i]);
	}
}
