#include<stdio.h>

void main()
{
	FILE *fp1,*fp2,*fp3;
	int i,count=1,n;
	
	fp1 = fopen("even.txt","w");
	fp2 = fopen("odd.txt","w");
	fp3 = fopen("prime.txt","w");
	
	printf("Enter the value : ");
	scanf("%d",&n);
	

		if(n % 2 == 0)
		{
			fprintf(fp1,"Even no. : %d\n",n);
		}
		else if(n % 2 == 1)
		{
			fprintf(fp2,"Odd no. : %d\n",n);
		}
	
	for(i=2 ; i<n ; i++)
	{
	
	    if(n % i == 0)
		{
			count=0;
		}
	    
	}
   	if(count == 1)
		{
			fprintf(fp3,"Prime no. : %d\n",n);
		}
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
}
