#include<stdio.h>
#include<conio.h>
main()
{
	int choice,bill = 0,qty = 1;
	clrscr();
	tmp:
	printf("Press 1 for Manchurian\n"); 
	printf("Press 2 for Dhosa\n");
	printf("Press 3 for Pizza\n");
	printf("Press 4 for Burger\n");
	printf("Press 5 for Pasta\n");
	printf("Press 6 for Sandwich\n");
	printf("Press 7 for Cold drink\n"); 
	printf("Enter your choice :");
	scanf("%d",&choice);

	clrscr();

	switch(choice)
	{
		case 1:
			printf("\nYou have ordered Manchurian\n");
			printf("Press 1 for Dry Manchurian\t100 RS\n");
			printf("Press 2 for Gravy Manchurian\t120 RS\n");
			printf("Press 3 for Cheese Manchurian\t150 RS\n");
			printf("Enter your choice :");
			scanf("%d",&choice);
			printf("Enter your quantity :");
			scanf("%d",&qty);

			switch(choice)
			{
				case 1:
					printf("\nYou have ordered Dry Manchurian\n");
					bill += 100 * qty;
					printf("Press 1 for order more..\n");
					printf("Press 0 for bill..\n");

					printf("Enter the value :");
					scanf("%d",&choice);

					if(choice==1)
					{
						goto tmp;
					}
					break;

				case 2:
				    printf("\nYou have ordered Gravy Manchurian\n");
					bill += 120 * qty;
					printf("Press 1 for order more..\n");
					printf("Press 0 for bill..\n");

					printf("Enter the value :");
					scanf("%d",&choice);

					if(choice==1)
					{
						goto tmp;
					}
					break;	

				case 3:
				    printf("\nYou have ordered cheese Manchurian\n");
					bill += 150 * qty;
					printf("Press 1 for order more..\n");
					printf("Press 0 for bill..\n");

					printf("Enter the value :");
					scanf("%d",&choice);

					if(choice==1)
					{
						goto tmp;
					}
					break;

				default :
					printf("Invalid choice..");	
					break;
			}
		break;

		case 2:
			printf("\nYou have ordered Dhosa\n");
			printf("Press 1 for Jinni Roll Dhosa\t199 RS\n");
			printf("Press 2 for Chinese Dhosa\t150 RS\n");
			printf("Press 3 for Cheese Gotala Dhosa\t170 RS\n");
			printf("Enter your choice :");
			scanf("%d",&choice);
			printf("Enter your quantity :");
			scanf("%d",&qty);

		switch(choice)
		{
			case 1:
				printf("\nYou have ordered Jinni Roll Dhosa\n");
				bill += 199 * qty;
				printf("Press 1 for order more..\n");
				printf("Press 0 for bill..\n");

				printf("Enter the value :");
				scanf("%d",&choice);

				if(choice==1)
				{
					goto tmp;
				}
				break;

			case 2:
			    printf("\nYou have ordered Chinese Dhosa\n");
				bill += 150 * qty;
				printf("Press 1 for order more..\n");
				printf("Press 0 for bill..\n");

				printf("Enter the value :");
				scanf("%d",&choice);

				if(choice==1)
				{
					goto tmp;
				}
				break;	

			case 3:
			    printf("\nYou have ordered cheese Gotala Dhosa\n");
				bill += 170 * qty;
				printf("Press 1 for order more..\n");
				printf("Press 0 for bill..\n");

				printf("Enter the value :");
				scanf("%d",&choice);

				if(choice==1)
				{
					goto tmp;
				}
				break;

			default :
				printf("Invalid choice..");	
				break;
		}
		break;

		case 3:
			printf("\nYou have ordered Pizza\n");
			printf("Press 1 for Margherita Pizza\t99 RS\n");
			printf("Press 2 for Cheese n Corn Pizza\t169 RS\n");
			printf("Press 3 for Farmhouse Pizza\t229 RS\n");
			printf("Enter your choice :");
			scanf("%d",&choice);
			printf("Enter your quantity :");
			scanf("%d",&qty);

		switch(choice)
		{
			case 1:
				printf("\nYou have ordered Margherita Pizza\n");
				bill += 99 * qty;
				printf("Press 1 for order more..\n");
				printf("Press 0 for bill..\n");

				printf("Enter the value :");
				scanf("%d",&choice);

				if(choice==1)
				{
					goto tmp;
				}
				break;

			case 2:
			    printf("\nYou have ordered Cheese n Corn Pizza\n");
				bill += 169 * qty;
				printf("Press 1 for order more..\n");
				printf("Press 0 for bill..\n");

				printf("Enter the value :");
				scanf("%d",&choice);

				if(choice==1)
				{
					goto tmp;
				}
				break;	

			case 3:
			    printf("\nYou have ordered Farmhouse Pizza\n");
				bill += 229 * qty;
				printf("Press 1 for order more..\n");
				printf("Press 0 for bill..\n");

				printf("Enter the value :");
				scanf("%d",&choice);

				if(choice==1)
				{
					goto tmp;
				}
				break;

			default :
				printf("Invalid choice..");	
				break;
		}
		break;

		case 4:
			printf("\nYou have ordered Burger\n");
			printf("Press 1 for Margherita Pizza\t99 RS\n");
			printf("Press 2 for Cheese n Corn Pizza\t169 RS\n");
			printf("Press 3 for Farmhouse Pizza\t229 RS\n");
			printf("Enter your choice :");
			scanf("%d",&choice);
			printf("Enter your quantity :");
			scanf("%d",&qty);

		switch(choice)
		{
			case 1:
				printf("\nYou have ordered Margherita Pizza\n");
				bill += 99 * qty;
				printf("Press 1 for order more..\n");
				printf("Press 0 for bill..\n");

				printf("Enter the value :");
				scanf("%d",&choice);

				if(choice==1)
				{
					goto tmp;
				}
				break;

			case 2:
			    printf("\nYou have ordered Cheese n Corn Pizza\n");
				bill += 169 * qty;
				printf("Press 1 for order more..\n");
				printf("Press 0 for bill..\n");

				printf("Enter the value :");
				scanf("%d",&choice);

				if(choice==1)
				{
					goto tmp;
				}
				break;	

			case 3:
			    printf("\nYou have ordered Farmhouse Pizza\n");
				bill += 229 * qty;
				printf("Press 1 for order more..\n");
				printf("Press 0 for bill..\n");

				printf("Enter the value :");
				scanf("%d",&choice);

				if(choice==1)
				{
					goto tmp;
				}
				break;

			default :
				printf("Invalid choice..");	
				break;			
		}
	break;		

	case 5:
			printf("\nYou have ordered Pasta\n");
			printf("Press 1 for Desi Cheese Pasta\t80 RS\n");
			printf("Press 2 for White Sauce Cheese Pasta\t100 RS\n");
			printf("Press 3 for Pink Sauce Pasta\t120 RS\n");
			printf("Enter your choice :");
			scanf("%d",&choice);
			printf("Enter your quantity :");
			scanf("%d",&qty);

		switch(choice)
		{
			case 1:
				printf("\nYou have ordered Desi Cheese Pasta\n");
				bill += 80 * qty;
				printf("Press 1 for order more..\n");
				printf("Press 0 for bill..\n");

				printf("Enter the value :");
				scanf("%d",&choice);

				if(choice==1)
				{
					goto tmp;
				}
				break;

			case 2:
			    printf("\nYou have ordered White Sauce Cheese Pasta\n");
				bill += 100 * qty;
				printf("Press 1 for order more..\n");
				printf("Press 0 for bill..\n");

				printf("Enter the value :");
				scanf("%d",&choice);

				if(choice==1)
				{
					goto tmp;
				}
				break;	

			case 3:
			    printf("\nYou have ordered Pink Sauce Pasta\n");
				bill += 120 * qty;
				printf("Press 1 for order more..\n");
				printf("Press 0 for bill..\n");

				printf("Enter the value :");
				scanf("%d",&choice);

				if(choice==1)
				{
					goto tmp;
				}
				break;

			default :
				printf("Invalid choice..");	
				break;			
		}
	break;		

	case 6:
			printf("\nYou have ordered Sandwich\n");
			printf("Press 1 for Veg Sandwich\t50 RS\n");
			printf("Press 2 for Paneer Cheese Sandwich\t80 RS\n");
			printf("Press 3 for Grill Sandwich\t100 RS\n");
			printf("Enter your choice :");
			scanf("%d",&choice);
			printf("Enter your quantity :");
			scanf("%d",&qty);

		switch(choice)
		{
			case 1:
				printf("\nYou have ordered Veg Sandwich\n");
				bill += 50 * qty;
				printf("Press 1 for order more..\n");
				printf("Press 0 for bill..\n");

				printf("Enter the value :");
				scanf("%d",&choice);

				if(choice==1)
				{
					goto tmp;
				}
				break;

			case 2:
			    printf("\nYou have ordered Paneer Cheese Sandwich\n");
				bill += 80 * qty;
				printf("Press 1 for order more..\n");
				printf("Press 0 for bill..\n");

				printf("Enter the value :");
				scanf("%d",&choice);

				if(choice==1)
				{
					goto tmp;
				}
				break;	

			case 3:
			    printf("\nYou have ordered Grill Sandwich\n");
				bill += 100 * qty;
				printf("Press 1 for order more..\n");
				printf("Press 0 for bill..\n");

				printf("Enter the value :");
				scanf("%d",&choice);

				if(choice==1)
				{
					goto tmp;
				}
				break;

			default :
				printf("Invalid choice..");	
				break;			
		}
	break;		

	case 7:
			printf("\nYou have ordered Cold Drink\n");
			printf("Press 1 for Mineral Water\t40 RS\n");
			printf("Press 2 for Red Bull\t60 RS\n");
			printf("Press 3 for Chocalate Milk\t50 RS\n");
			printf("Enter your choice :");
			scanf("%d",&choice);
			printf("Enter your quantity :");
			scanf("%d",&qty);

		switch(choice)
		{
			case 1:
				printf("\nYou have ordered Veg Sandwich\n");
				bill += 50 * qty;
				printf("Press 1 for order more..\n");
				printf("Press 0 for bill..\n");

				printf("Enter the value :");
				scanf("%d",&choice);

				if(choice==1)
				{
					goto tmp;
				}
				break;

			case 2:
			    printf("\nYou have ordered Paneer Cheese Sandwich\n");
				bill += 80 * qty;
				printf("Press 1 for order more..\n");
				printf("Press 0 for bill..\n");

				printf("Enter the value :");
				scanf("%d",&choice);

				if(choice==1)
				{
					goto tmp;
				}
				break;	

			case 3:
			    printf("\nYou have ordered Grill Sandwich\n");
				bill += 100 * qty;
				printf("Press 1 for order more..\n");
				printf("Press 0 for bill..\n");

				printf("Enter the value :");
				scanf("%d",&choice);

				if(choice==1)
				{
					goto tmp;
				}
				break;

			default :
				printf("Invalid choice..");	
				break;			
		}
	break;		
	}
	printf("Total bill %d",bill);
  getch();		
}
