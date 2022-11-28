#include<stdio.h>
#include<conio.h>

main()
{
   float celsius,fahernheit;
   clrscr();

  printf("Temprecture of Celsius :");
  scanf("%f",&celsius);

  fahernheit = (1.8 * celsius) + 32;

  printf("Fahernheit : %.2f",fahernheit);

  getch();
}
