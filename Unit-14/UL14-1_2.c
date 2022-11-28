#include<stdio.h>

struct student
{
   int id;
   char name[100];	
   int chem;
   int phy;
   int bio;
   int english;
   int comp;
   int total;
   float per;
};

void main()
{
	FILE *fp;
	fp = fopen("Studs.txt","a");
	
	int n;
	float t=0;
	
	printf("Enter N : ");
	scanf("%d",&n);
	
	struct student s[n];
	int i;
	
	for(i=0 ; i<n ; i++)
	{
		system("cls");
		
		printf("%d)Enter Name : ",i+1);
		scanf("%s",&s[i].name);
		printf("%d)Enter Id : ",i+1);
		scanf("%d",&s[i].id);
		printf("%d)Enter chemistry : ",i+1);
		scanf("%d",&s[i].chem);
		printf("%d)Enter Physics : ",i+1);
		scanf("%d",&s[i].phy);		
		printf("%d)Enter Biology : ",i+1);
		scanf("%d",&s[i].bio);	
		printf("%d)Enter English : ",i+1);
		scanf("%d",&s[i].english);	
		printf("%d)Enter Computer : ",i+1);
		scanf("%d",&s[i].comp);
	}
	
	fprintf(fp,"Id\tName\tChem.\tPhy.\tBio.\tEng.\tComp.\tTotal\tPer\n------- ------- ------- ------- ------- ------- ------- ------- -------\n");
	
	for(i=0 ; i<n ; i++)
	{
		s[i].total = (s[i].chem + s[i].phy + s[i].bio + s[i].english + s[i].comp);
	}
	for(i=0 ; i<n ; i++)
	{
		s[i].per = (s[i].total)*100/500;
	}
	for(i=0 ; i<n ; i++)
	{
		fprintf(fp,"%d\t%s\t%d\t%d\t%d\t%d\t%d\t%d\t%.2f\n",s[i].id,s[i].name,s[i].chem,s[i].phy,s[i].bio,s[i].english,s[i].comp,s[i].total,s[i].per);
	}
}
