#include<stdio.h>

struct distans
{
	int inch;
	int feet;
};

void main()
{
	struct distans d1,d2,d3;
	
	printf("Enter the D1 Inch : ");
	scanf("%d",&d1.inch);
	printf("Enter the D1 Feet : ");
	scanf("%d",&d1.feet);
	printf("Enter the D2 Inch : ");
	scanf("%d",&d2.inch);
	printf("Enter the D2 Feet : ");
	scanf("%d",&d2.feet);
	
	d3.inch = d1.inch + d2.inch;
	d3.feet = d1.feet + d2.feet;
	
	while(d3.inch >= 12)
	{
		d3.inch = d3.inch - 12;
		d3.feet++;
	}
	
		printf("D3 Inch : %d\n",d3.inch);
		printf("D3 Feet : %d\n",d3.feet);
}
