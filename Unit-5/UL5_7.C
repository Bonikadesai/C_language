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

  printf("Value is : %d",(x*x) + (2*x*y) + (2*y*z) + (2*z*x) + (y*y) + (z*z));

  getch();
}
