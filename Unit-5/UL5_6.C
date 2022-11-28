#include<stdio.h>
#include<conio.h>

main()
{
  int x,y,z;
  clrscr();

  printf("Enter the value of X :");
  scanf("%d",&x);
  printf("Enter the value of Y :");
  scanf("%d",&y);
  printf("Enter the value of Z :");
  scanf("%d",&z);

  printf("Value is : %d",(x*x*x) - (3*x*y) - (3*y*z) - (3*z*x) + (y*y*y) + (z*z*z));

  getch();
}
