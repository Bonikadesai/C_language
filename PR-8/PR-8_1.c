#include<stdio.h>

void main()
{
	int a,b;
	
	printf("Enter the value of A : ");
	scanf("%d",&a);
	printf("Enter the value of B : ");
	scanf("%d",&b);

    int *p1 = &a;
    int *p2 = &b;
    
    *p1 = *p1 + *p2;
    *p2 = *p1 - *p2;
    *p1 = *p1 - *p2;
    
    printf("A is : %d\nB is : %d",a,b);
}
