#include<stdio.h>

main()
{
	int n;
	
	printf("Enter array of size : ");
	scanf("%d",&n);
	
	int a[n],freq[n],i,j,count;
	
	for(i=0 ; i<n ; i++)
	{
		printf("Enter a[%d] : ");
		scanf("%d",&a[i]);
		freq[i] = -1;
	}
	
	for(i=0 ; i<n ; i++)
	{
		count = 1;
		for(j=i+1 ; j<n ; j++)
		{
			if(a[i] == a[j])
			{
				count++;
				freq[j] = 0;
			}
		}
		
		if(freq[i] != 0)
		{
			freq[i] = count;
		}
	}
	
	for(i=0 ; i<n ; i++)
	{
		if(freq[i] != 0)
		{
			printf("%d Occurs %d times..\n",a[i],freq[i]);
		}
	}
}
