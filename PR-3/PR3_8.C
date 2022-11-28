#include<stdio.h>
#include<conio.h>

main()
{
  int i,n,count=0;
  clrscr();

  printf("Enter any number :");
  scanf("%d",&n);

  for(i=1 ; i<=n ; i++)
  {
     if(n % i == 0)
     {
       count++;
     }
  }
  if(count == 2)
  {
    printf("Prime Number..");
  }
  else
  {
    printf("Not Prime Number..");
  }
  getch();
}