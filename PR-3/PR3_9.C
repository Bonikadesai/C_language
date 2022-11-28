#include<stdio.h>
#include<conio.h>

main()
{
  int i,n,sum=0,mul=1;
  clrscr();

  printf("Enter any Number :");
  scanf("%d",&n);


  while(n>0)
  {
    sum += (n%10);
    mul *= (n%10);
    n = n/10;
  }
  if(mul == sum)
  {
    printf("Magic Number..");
  }
  else
  {
    printf("Not Magic Number..");
  }
  getch();
}