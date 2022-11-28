#include<stdio.h>
#include<conio.h>

main()
{
  int x,y;
  clrscr();

  printf("Enter the value of X :");
  scanf("%d",&x);
  printf("Enter the value of Y :");
  scanf("%d",&y);

  printf("Value is : %d",(x*x) - (2*x*y) + (y*y));

  getch();
}
