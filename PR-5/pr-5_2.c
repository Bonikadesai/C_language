#include<stdio.h>

 main()
 {
 	int i,n,first,second;
 	int a[100];
 	
 	 printf("Enter the size=");
 	 scanf("%d",&n);
 	 
 	 for(i=0 ;i<n ;i++)
 	 {
 	 	printf("a[%d]=",i);
 	 	scanf("%d",&a[i]);
	  }
	  
	   first = a[0];
	  for(i=0 ;i<n;i++)
	  {
	  	if(a[i]>first)
          {
          	
          	first =a[i];
		  }
      }
		  printf("first larges no.:%d",first);
		second =a[0];  
	    for(i=0 ;i<n ;i++)
	    {		
		   if(a[i]>second && a[i]<first )
		   {
			second =a[i];
		   }  
	  }
	   printf("\n\nSecond largest no.:%d",second);
}
 
