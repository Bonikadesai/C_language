#include<stdio.h>
#include<conio.h>

main()
{
  int i,n;
  clrscr();

  printf("Enter the value :");
  scanf("%d",&n);

  for(i=n ; n>=1 ; n--)
  {
     if(n % 2 == 0)
     {
       printf("%d\n",n);
     }
  }
  getch();
}