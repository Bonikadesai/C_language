#include<stdio.h>
#include<conio.h>

main()
{
  int i,n,count=0;
  clrscr();

  printf("Enter the number :");
  scanf("%d",&n);

  for(i=1 ; n>0 ; count++)
  {
	n = n / 10;
  }
  printf("Count is : %d",count);
  getch();
}