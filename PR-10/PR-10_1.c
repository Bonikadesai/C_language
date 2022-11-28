#include<stdio.h>

void main()
{
	FILE *fp;
	
	fp = fopen("bonika.txt","w");
	
	fprintf(fp,"Hello !! How are you??");
	
	fclose(fp);
}
