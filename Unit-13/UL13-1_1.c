#include<stdio.h>

struct student
{
	int id;
	char name[100];
	int age;
	char course[100];
	char city[100];
	int std;
	char school[100];
};

void main()
{
	int n,i;
	
	printf("Enter number of student : ");
	scanf("%d",&n);
	
	struct student s[n];
	
	for(i=0 ; i<n ; i++)
	{
		system("cls");
		printf("\n%d / %d\n",i+1,n);
		
		printf("Enter Name\t : ");
		scanf("%s",&s[i].name);
		printf("Enter Course\t : ");
		scanf("%s",&s[i].course);
		printf("Enter City\t : ");
		scanf("%s",&s[i].city);
		printf("Enter School\t : ");
		scanf("%s",&s[i].school);
		printf("Enter Id\t : ");
		scanf("%d",&s[i].id);
		printf("Enter Age\t : ");
		scanf("%d",&s[i].age);
		printf("Enter Standerd\t : ");
		scanf("%d",&s[i].std);
	}
	
	system("cls");
	printf("Name\tCourse\tCity\tSchool\tId\tAge\tStd\n------- ------- ------- ------- ------- ------- -------\n");
	for(i=0 ; i<n ; i++)
	{
		printf("%s\t%s\t%s\t%s\t%d\t%d\t%d\n",s[i].name,s[i].course,s[i].city,s[i].school,s[i].id,s[i].age,s[i].std);
	}
}
