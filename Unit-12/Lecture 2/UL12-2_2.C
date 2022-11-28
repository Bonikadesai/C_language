#include<stdio.h>
void ascen(int *a,int n)
{
	int i,j;
	
    for(i=0;i<n;i++)
	 {
	 	for(j=i+1;j<n;j++)
	 	{
	 		if(a[i] > a[j])
	 		{
	 			a[i] = a[i] + a[j];
	 			a[j] = a[i] - a[j];
	 			a[i] = a[i] - a[j];
		 	}
	  	} 	
	}
}
int main()
 {
 	int a[100];
 	int i,n;
 	
 	printf("Enter the array size=");
 	scanf("%d",&n);
 	 
 	for(i=0;i<n;i++)
 	{
 	 	printf("a[%d]=",i);
 	 	scanf("%d",&a[i]);
	}
	  
	ascen(a,n);
	 
	for(i=0;i<n;i++)
	{
		printf("a[%d] => %d\n",i,a[i]);
	}
	return 0;
 }  
