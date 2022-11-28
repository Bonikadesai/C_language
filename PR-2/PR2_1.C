#include<stdio.h>
#include<conio.h>

main()
{
  char a;
  clrscr();

  printf("Enter any charcter :");
  scanf("%c",&a);

  if((a>='A' && a<='Z') || (a>='a' && a<='z'))
  {
    printf("This value an alphabet");
  }
  else if(a>='0' && a<='9')
  {
    printf("This is Digit");
  }
  else
  {
    printf("This is a Special Charcter");
  }

  getch();
 }
