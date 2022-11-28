#include<stdio.h>
#include<conio.h>

main()
{
  int i=1,n,fact=1;
  clrscr();

  printf("Enter the value :");
  scanf("%d",&n);

  do
  {
    fact *= i;
    i++;
  }
  while(i<=n);

  printf("Factorial : %d",fact);

  getch();
}