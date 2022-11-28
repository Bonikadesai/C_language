#include<stdio.h>
#include<conio.h>

main()
{
   int a;
   clrscr();

   printf("Enter the value of A :");
   scanf("%d",&a);

   if(a > 0)
   {
	printf("A is Positive value..");
   }
   else if(a==0)
   {
	printf("A is Neutral value..");
   }
   else
   {
	printf("A is Negative value..");
   }
   getch();
}
