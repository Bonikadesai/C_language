#include<stdio.h>
#include<conio.h>

main()
{
  float base_salary,da,ta,hra,gross_salary;
  clrscr();

  printf("Base_Salary is :");
  scanf("%f",&base_salary);

    hra = (base_salary * 10)/100;
    da = (base_salary * 5)/100;
    ta = (base_salary * 8)/100;

    gross_salary = base_salary + da + ta + hra;

    printf("Gross_Salary \t: %.2f\n",gross_salary);
    printf("HRA \t\t: %.2f\n",hra);
    printf("DA\t\t: %.2f\n",da);
    printf("TA\t\t : %.2f\n",ta);

    getch();
}