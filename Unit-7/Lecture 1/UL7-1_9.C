#include<stdio.h>
#include<conio.h>

main()
{
  int i=1,n,fact=1;
  clrscr();

  printf("Enter Ending Point :");
  scanf("%d",&n);

  while(i<=n)
  {
    printf("%d\n",i);
    fact *= i;
    i++;
  }
  printf("Factorial of All element : %d",fact);
  getch();
}