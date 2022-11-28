#include<stdio.h>

void main()
{
	FILE *fp;
	int n;
	
	fp = fopen("bonika.txt","r");
	
	fscanf(fp,"%d",&n);
	printf("File : %d",n);
	
	fclose(fp);
}
