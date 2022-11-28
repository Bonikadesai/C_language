#include<stdio.h>
#include<conio.h>

main()
{
  int n;
  clrscr();

  printf("Enter Ending Point :");
  scanf("%d",&n);

  while(n>=1)
  {
    printf("%d ",n);
    n--;
  }
  getch();
}