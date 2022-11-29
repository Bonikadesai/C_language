#include<stdio.h>

struct employee{
	int e_id;
	char e_name[100];
	char e_dept[100];
	int base_salary;
	float HRA;
	float DT;
	float TA;
	float gross_salary;
};

void main(){
	FILE *fp;
	
	fp = fopen("gross_salary.txt","a");
	
	int n;
	
	printf("Enter the Employee No. : ");
	scanf("%d",&n);
	
	struct employee e[n];
	int i,gross_salary;
	
	for(i=0 ; i<n ; i++){
		system("cls");
		
		printf("%d) Enter Name\t : ",i+1);
		scanf("%s",&e[i].e_name);
		printf("%d) Enter Department : ",i+1);
		scanf("%s",&e[i].e_dept);
		printf("%d) Enter Id\t: ",i+1);
		scanf("%d",&e[i].e_id);
		printf("%d) Enter Base_salary : ",i+1);
		scanf("%d",&e[i].base_salary);
		printf("%d) Enter HRA\t : ",i+1);
		scanf("%f",&e[i].HRA);
		printf("%d) Enter DT\t : ",i+1);
		scanf("%f",&e[i].DT);
		printf("%d) Enter TA\t : ",i+1);
		scanf("%f",&e[i].TA);
	}
	
	for(i=0 ; i<n ; i++)
	{
		e[i].HRA = (e[i].base_salary * e[i].HRA)/100;
		e[i].DT  = (e[i].base_salary * e[i].DT)/100;
		e[i].TA  = (e[i].base_salary * e[i].TA)/100;
	}
	
	fprintf(fp,"Id\tName\tDept.\tBS\tHRA\tDT\tTA\tGS\n------- ------- ------- ------- ------- ------- ------- -------\n");
	
	for(i=0 ; i<n ; i++)
	{
		e[i].gross_salary = (e[i].base_salary + e[i].DT + e[i].TA + e[i].HRA);
	}	
	
	for(i=0 ; i<n ; i++)
	{
		fprintf(fp,"%d\t%s\t%s\t%d\t%.2f\t%.2f\t%.2f\t%.2f\n",e[i].e_id,e[i].e_name,e[i].e_dept,e[i].base_salary,e[i].HRA,e[i].DT,e[i].TA,e[i].gross_salary);
	}
	
	fclose(fp);
}
