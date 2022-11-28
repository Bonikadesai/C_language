#include<stdio.h>
#include<conio.h>

main()
{
   float unit,amt,bill;
   clrscr();

   printf("Enter the Unit :");
   scanf("%f",&unit);

   if(unit>=0 && unit<=50)
   {
      bill = (unit * 50);
   }
   else if(unit>50 && unit<=150)
   {
      bill = ((unit - 50)*0.75)+25;
   }
   else if(unit>150 && unit<=250)
   {
      bill = ((unit - 150)*1.20)+100;
   }
   else
   {
      bill = ((unit - 250)*1.50)+220;
   }

   amt = bill + (bill * 0.2);
   printf("Bill : %.2f",amt);

   getch();
}
