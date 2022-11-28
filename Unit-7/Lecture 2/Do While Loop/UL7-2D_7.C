#include<stdio.h>
#include<conio.h>

main()
{
  int i=2000;
  clrscr();

  do
  {
    if(i % 4 == 0)
    {
     printf("%d ",i);
    }
    i++;
  }
  while(i<=3000);

  getch();
}