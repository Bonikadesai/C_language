#include<stdio.h>
 main()
  {
  	int i,j,r,c,sum=0;
  	
  	printf("Enter the Row element size :");
  	scanf("%d",&r);
  	printf("Enter the Column element size :");
  	scanf("%d",&c);
  
	int a[r][c];
  	
  	for(i=0;i<r;i++)
  	{
  	  for(j=0 ; j<c ; j++)
		{	
  		   printf("a[%d][%d]=",i,j);
  		   scanf("%d",&a[i][j]);
  	    }
	}
	  
	  printf("\n");
	
	for(i=0;i<r;i++)
	{
		for(j=0 ; j<c ; j++)
		{	
		    if(i==j)
		      {
		  	    printf("%d",a[i][j]);
		  	    sum = sum + a[i][j];
		      }
		  else
		     {
		  	    printf(" ");
		     }
    	}
    	printf("\n");
	 }   
		
		printf("Sum is => %d\n",sum);  
  }

