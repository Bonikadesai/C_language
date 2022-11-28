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
    if(n % 2 == 0)
    {
       printf("%d\n",n);
    }
    n--;
  }
  getch();
}