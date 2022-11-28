#include<stdio.h>
#include<conio.h>

main()
{
  int i=2000;
  clrscr();

  while(i<=3000)
  {
    if(i % 4 == 0)
    {
       printf("%d ",i);
    }
    i++;
  }
  getch();
}