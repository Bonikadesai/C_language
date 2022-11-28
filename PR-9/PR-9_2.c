#include<stdio.h>

union marks
{
	int roll_no;
	char name[100];
	int chem_marks;
	int maths_marks;
	int phy_marks;
	
};

void main()
{
	int i,n,j;
	float pr,t=0;
	printf("Enter number of student : ");
	scanf("%d",&n);
	
	union marks m[n];
	
	for(i=0 ; i<n ; i++)
	{
		system("cls");
		printf("\n%d / %d\n",i+1,n);
		
		printf("Enter Name : ");
		scanf("%s",&m[n].name);
		printf("Enter Roll_no : ");
		scanf("%d",&m[n].roll_no);
		printf("Enter chem_marks : ");
		scanf("%d",&m[n].chem_marks);
		t += m[n].chem_marks;
		printf("Enter maths_marks : ");
		scanf("%d",&m[n].maths_marks);
		t += m[n].maths_marks;
		printf("Enter phy_marks : ");
		scanf("%d",&m[n].phy_marks);	
		t += m[n].phy_marks;	 
	}
	
	system("cls");
	
	for(i=0 ; i<n ; i++)
	{
		pr = (t)*100/300; 	
	}
		
	for(i=0 ; i<n ; i++)
	{
	    printf("Persantag : %.2f\n",pr);	
	}
}
