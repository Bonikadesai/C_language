#include<stdio.h>
#include<conio.h>

main()
{
  int n,sum=0,last;
  clrscr();

  printf("Enter any number :");
  scanf("%d",&n);

  last = n % 10;
  while(n>=10)
  {
     n = n / 10;
  }
  sum = n + last;

  printf("Sum is : %d",sum);
  getch();
}