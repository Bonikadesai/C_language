#include<stdio.h>
#include<conio.h>

main()
{
  int a;
  clrscr();

  printf("Enter any value :");
  scanf("%d",&a);

  (a % 2 == 0)
	    ? printf("This value is Even ")
	    : printf("This value is Odd");
    getch();
}
