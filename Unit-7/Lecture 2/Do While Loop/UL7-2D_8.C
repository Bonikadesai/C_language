#include<stdio.h>
#include<conio.h>

main()
{
  int i=1,n,sum=0;
  clrscr();

  printf("Enter the value :");
  scanf("%d",&n);

  do
  {
    sum += i;
    i++;
  }
  while(i<=n);

  printf("Sum : %d",sum);

  getch();
}