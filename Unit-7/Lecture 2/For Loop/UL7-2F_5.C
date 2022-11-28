#include<stdio.h>
#include<conio.h>

main()
{
  int i,n;
  clrscr();

  printf("Enter the value :");
  scanf("%d",&n);

  for(i=1 ; i<=n ; i++)
  {
     if(i % 2 == 1)
     {
       printf("%d\n",i);
     }
  }
  getch();
}