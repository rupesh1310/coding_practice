/* Write a menu driven program which has following options 
   1.Factorial or not
   2.Prime or not
   3.Odd or even
   4.Exit
Once a menu item is selected the appropriate action should be taken and once this action is finished, the emnu should reappear.Unless the user selects the "Exit" option the program should continue to work." */

#include<stdio.h>
int main()
{
	int choice, num, i;
	unsigned long int fact;
	
	while(1)
	{
		printf("\n\n 1. Factorial\n");
		printf("2. Prime\n");
		printf("3. Odd/Even\n");
		printf("4. Exit\n");
		
		printf("Your choice");
		scanf("%d",&choice);
		
		switch (choice)
		{
		    case 1: 
			printf("\nEnter number:");
			scanf("%d",&num);
			
		    fact = 1;
		    for(i=1;i <= num; i++)
		    	fact = fact * i;
	            printf("Factorial value = %lu\n",fact);
		    break;
			
		    case 2: 
			printf("\nEnter number:\n");
			scanf("%d",&num);

		   for(i=2;i < num; i++)
		   {
			if(num % i == 0)
			{
				printf("Not a prime");
				break;
			}
		     }
			if(i == num)
			  printf("\nPrime number");
			  break;
		case 3:
			printf("\nEnter number:\n");			
			scanf("%d",&num);	
			
			if(num % 2 == 0)
				printf("Even number:\n");
			else
				printf("Odd number:\n");
			break;
		case 4: exit(0);
			
	}
	}
return 0;
}

