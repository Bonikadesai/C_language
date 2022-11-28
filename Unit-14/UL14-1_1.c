#include<stdio.h>

void main()
{
	FILE *fp;
	int a;
	
	fp = fopen("hello.txt","r");
	fscanf(fp,"%d",&a);
	
	printf("Value from file : %d",a);
	fclose(fp);
}
