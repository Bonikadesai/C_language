#include<stdio.h>
#include<conio.h>

main()
{
  int a,b,c,d;
  clrscr();

  printf("Enter A:");
  scanf("%d",&a);
  printf("Enter B:");
  scanf("%d",&b);
  printf("Enter C:");
  scanf("%d",&c);
  printf("Enter D:");
  scanf("%d",&d);

  if(a>b)
  {
     if(a>c)
     {
	if(a>d)
	{
	   printf("A is max..");
	}
	else
	{
	   printf("D is max..");
	}
     }
     else
     {
       if(c>d)
       {
	  printf("C is max..");
       }
       else
       {
	  printf("D is max..");
       }
     }
  }
  else
  {
     if(b>c)
     {
	if(b>d)
	{
	   printf("B is max..");
	}
	else
	{
	   printf("D is max..");
	}
     }
     else
     {
       if(c>d)
       {
	  printf("C is max..");
       }
       else
       {
	  printf("D is max..");
       }
     }
  }
  getch();
}
