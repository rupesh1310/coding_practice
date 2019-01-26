/* Any year is input through the keyboard.WAP to determine whether the year is leap year or not.
Hint:use % operator.
*/

#include<stdio.h>

int main()
{
	int yr;
	
	printf("\nEnter the year.\n");
	scanf("%d", &yr);
	
	if(yr % 100 == 0)
	{
		if(yr % 400 == 0)
			printf("Leap year\n");
		else
			printf("Not a leap year\n");
	}
	 else 
	    {
		if(yr % 4 == 0)
			printf("Leap year \n");
		else
			printf("Not a leap year \n");
	}

	return 0;
}
