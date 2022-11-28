#include<stdio.h>
   main()
 {
 	int r,c,i,j;
 	
 	printf("Enter the Row ele. :");
 	scanf("%d",&r);
 	printf("Enter the Column ele. :");
 	scanf("%d",&c);
 	
 	int a[r][c];
 	
 	for(i=0;i<r;i++)
 	{
 		for(j=0;j<c;j++)
 		{
 			printf("a[%d][%d] = ",i,j);
 			scanf("%d",&a[i][j]);
		 }
	}
	 
	 printf("\n-----------\n");
	 
	 for(i=0;i<r;i++)
	 {
	 	for(j=0;j<c;j++)
	 	{
	 	  printf("%d",a[j][i]);
		}
		printf("\n");
	 }
 }





