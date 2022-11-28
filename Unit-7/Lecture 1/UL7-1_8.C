#include<stdio.h>
#include<conio.h>

main()
{
  int i=1,n,sum=0;
  clrscr();

  printf("Enter Ending Point :");
  scanf("%d",&n);

  while(i<=n)
  {
    printf("%d\n",i);
    sum += i;
    i++;
  }
  printf("Sum of All element : %d",sum);
  getch();
}