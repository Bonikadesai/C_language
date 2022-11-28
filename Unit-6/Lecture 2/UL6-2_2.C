#include<stdio.h>
#include<conio.h>

 main()
 {
   int a,b,c;
   clrscr();

   printf("Enter A :");
   scanf("%d",&a);
   printf("Enter B :");
   scanf("%d",&b);
   printf("Enter C :");
   scanf("%d",&c);

   if(a==b && b==c && c==a)
   {
      printf("All are same..");
   }
   else if(a==b && a!=c)
   {
     if(a<c)
     {
	printf("A and B are Min..");
     }
     else
     {
	printf("C is Min..");
     }
   }
   else if(b==c && b!=a)
   {
     if(b<a)
     {
	printf("B and C are Min..");
     }
     else
     {
	printf("A is Min..");
     }
   }
   else if(c==a && c!=b)
   {
     if(c<b)
     {
	printf("C and A are Min..");
     }
     else
     {
	printf("B is Min..");
     }
   }
  else if(a<b)
   {
       if(a<c)
       {
	  printf("A is Min..");
       }
       else
       {
	  printf("C is Min..");
       }
   }
   else
   {
       if(b<c)
       {
	  printf("B is Min..");
       }
       else
       {
	  printf("C is Min..");
       }
   }
   getch();
 }
