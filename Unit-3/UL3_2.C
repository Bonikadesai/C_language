#include<stdio.h>
#include<conio.h>

main()
{
  int a,b;
  clrscr();

  printf("Enter the value of A :");
  scanf("%d",&a);
  printf("Enter the value of B :");
  scanf("%d",&b);

  a=a+b;
  b=a-b;
  a=a-b;

  printf("A : %d\nB : %d",a,b);
  getch();
}