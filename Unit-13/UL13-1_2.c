#include<stdio.h>

struct employee
{
	char name[100];
	char role[100];
	char city[100];
	char company[100];
	float experience;
	int id;
	int age;
};

void main()
{
	int n,i;
	
	printf("Enter number of Employee : ");
	scanf("%d",&n);
	
	struct employee e[n];
	
	for(i=0 ; i<n ; i++)
	{
		system("cls");
		printf("\n%d / %d\n",i+1,n);
		
		printf("Enter Name\t : ");
		scanf("%s",&e[i].name);
		printf("Enter Role\t : ");
		scanf("%s",&e[i].role);
		printf("Enter City\t : ");
		scanf("%s",&e[i].city);
		printf("Enter Company\t : ");
		scanf("%s",&e[i].company);
		printf("Enter Experince\t : ");
		scanf("%f",&e[i].experience);
		printf("Enter Id\t : ");
		scanf("%d",&e[i].id);
		printf("Enter Age\t : ");
		scanf("%d",&e[i].age);
	}
	
	system("cls");
	printf("Name\tRole\tCity\tCompany\tExperince\tId\tAge\n------- ------- ------- ------- ------- ------- -------\n");
	
	for(i=0 ; i<n ; i++)
	{
		printf("%s\t%s\t%s\t%s\t%.2f\t%d\t%d\n",e[i].name,e[i].role,e[i].city,e[i].company,e[i].experience,e[i].id,e[i].age);
	}
}
