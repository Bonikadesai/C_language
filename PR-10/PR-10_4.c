#include<stdio.h>

void main()
{
	FILE *fp;
	int a;
	
	fp = fopen("bonika1.txt\n","a");
	
	fprintf(fp,"%d",a);
	printf("File : %d",a);
	
	fclose(fp);
}
