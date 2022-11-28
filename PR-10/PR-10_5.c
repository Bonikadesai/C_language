#include<stdio.h>

void main()
{
	FILE *fp,*fp2;
	int a;
	
	fp = fopen("bonifp.txt","r");
	fp2 = fopen("bonifp2.txt","a");
	
	fscanf(fp,"%d",&a);
	printf("Value of File : %d",a);
	fprintf(fp2,"%d",a);
	
	fclose(fp);
	fclose(fp2);
}
