#include<stdio.h>
#include<conio.h>

main()
{
  int i,n,sum=0;
  clrscr();

  printf("Enter the value :");
  scanf("%d",&n);

  for(i=1 ; i<=n ; i++)
  {
     sum += i;
  }

  printf("Sum = %d",sum);
  getch();
}