#include<stdio.h>
#include<conio.h>

main()
{
  char week;
  clrscr();

  printf("Enter week name :");
  scanf("%c",&week);

  switch(week)
  {
      case 'M':
	     printf("Monday");
	     break;
      case 'T':
	     printf("Tuesday");
	     break;
      case 'W':
	     printf("Wednsday");
	     break;
      case 't':
	     printf("Thursday");
	     break;
      case 'F':
	     printf("Friday");
	     break;
      case 'S':
	     printf("Saturday");
	     break;
      case 's':
	     printf("sunday");
	     break;
      default:
	     printf("Invalid Week name");
  }
  getch();
}
