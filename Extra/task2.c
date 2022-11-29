#include<stdio.h>

void main()
{
	FILE *fp1,*fp2;
	
	fp1 = fopen("reverse.txt","r");
	fp2 = fopen("reverse2.txt","w");
	
	int rem,rev=0,n;
	
	fscanf(fp1,"%d",&n);
	
	while(n != 0){
		rem = n % 10;
		rev = rev * 10 + rem;
		n = n / 10;
	}
	
	fprintf(fp2,"%d",rev);
	fclose(fp1);
	fclose(fp2);
}
