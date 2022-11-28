#include<stdio.h>
#include<conio.h>

main()
{
  int i=1,n;
  clrscr();

  printf("Enter Ending Point :");
  scanf("%d",&n);

  while(i<=n)
  {
    printf("%d ",i);
    i++;
  }
  getch();
}