#include<stdio.h>

void main(){
	FILE *vow,*con;
	
	vow = fopen("Vowel.txt","w");
	con = fopen("Constant.txt","w");
	
	char n[100],i;
	
	printf("Enter any string : ");
	scanf("%[^\n]",&n);
	
	for(i=0 ; i<strlen(n) ; i++)
	{
		if(n[i]=='A' || n[i]=='E' || n[i]=='I' || n[i]=='O' || n[i]=='U' || n[i]=='a' || n[i]=='e' || n[i]=='i' || n[i]=='o' || n[i]=='u')
		{
			fprintf(vow,"%c",n[i]);
		}
		else
		{
			fprintf(con,"%c",n[i]);
		}
		
		fclose(vow);
		fclose(con);
	}   
	
}
