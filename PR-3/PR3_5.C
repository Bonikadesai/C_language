#include<stdio.h>
#include<conio.h>

main()
{
  int n,i,rem,rev=0,cpy;
  clrscr();

  printf("Enter any number :");
  scanf("%d",&n);
  cpy=n;

  while(n!=0)
  {
    rem = n % 10;
    rev = rev * 10 + rem;
    n = n / 10;
  }
  printf("Revinder : %d\n\n",rev);

  if(cpy == rev)
  {
    printf("Palindrome Number..");
  }
  else
  {
    printf("Not Palidrome Number..");
  }
  getch();
}