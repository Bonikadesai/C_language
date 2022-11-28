#include<stdio.h>
#include<conio.h>

main()
{
  char i='A';
  clrscr();

  do
  {
     printf("%c ",i);
     i++;
  }
  while(i<='Z');
  getch();
}