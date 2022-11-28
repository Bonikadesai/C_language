#include<stdio.h>

 main()
 {
 	int i,n,choice;
 	int a[n],pos,val;
 	
 	printf("Press 1 for Insert Element..\n");
 	printf("Press 2 for Delete Element..\n");
 	printf("Press 3 for Update Element..\n\n");
 	
 	printf("Enter your choice Element : ");
 	scanf("%d",&choice);
 	
 	switch(choice)
 	{
 		case 1:
 	        printf("\nEnter no.of size= ");
 	        scanf("%d",&n);
 	   
 	        for(i=0 ;i<n ; i++)
 	         {
 	   	        printf("a[%d] =",i);
 	   	        scanf("%d",&a[i]);
	         }
		
	         printf("Enter position =");
	         scanf("%d",&pos);
	
	         printf("Enter value =");
	        scanf("%d",&val);
	        
	     printf("\nInsret element :\n");
	  
	        for(i=n-1 ; i>=pos ;i--)
	         {
	           a[i+1] = a[i];
	         }	
	         n++;
	        a[pos] = val;
	 
	        for(i=0 ; i<n ; i++)
	         {
	 	       printf("a[%d] => %d\n",i,a[i]);
	         }
	 
	    break;
		
		case 2:
		    printf("\nEnter no.of size= ");
 	        scanf("%d",&n);
 	   
 	        for(i=0 ;i<n ; i++)
 	         {
 	   	        printf("a[%d] =",i);
 	   	        scanf("%d",&a[i]);
	         }
	         
	        printf("Enter position =");
	        scanf("%d",&pos);
	 
	     printf("\nDelet element : \n") ;
	   
	        for(i=pos ; i<n ;i++)
	         {
	           a[i] = a[i+1];
	         }	
	         n--;
	
	        for(i=0 ; i<n ; i++)
	         {
	 	        if(i>=pos)
	 	         {
	 	            printf("a[%d] => %d\n",i+1,a[i]);
	             }
	            else
	             {
	            	printf("a[%d] => %d\n",i,a[i]);
	             }
	         }
	         
	    break;
	    
	    case 3:
	    	printf("\nEnter no.of size= ");
 	        scanf("%d",&n);
 	   
 	        for(i=0 ;i<n ; i++)
 	         {
 	   	        printf("a[%d] =",i);
 	   	        scanf("%d",&a[i]);
	         }
		
	         printf("Enter position =");
	         scanf("%d",&pos);
	
	         printf("Enter value =");
	        scanf("%d",&val);
	        
	    printf("\nUpdate array is:\n");
	        a[pos] = val;
	 
	        for(i=0;i<n;i++)
	         {
	 	       printf("a[%d] =>%d\n",i,a[i]);
	         }
	    break;     
	    
	    default:
	    	printf("Invalid choice Element..");
	    	break;
    }
 }
