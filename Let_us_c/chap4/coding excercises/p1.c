/* Any year is entered through the keyboard WAP to determine whether the year is leap or not use logical operators */
#include<stdio.h>
int main()
{
	int year;
	
	printf("Enter year:\n");
	scanf("%d",&year);
	
	if(year % 400 == 0 || year % 100 != 0 && year % 4 == 0)
		printf("Leap year\n");
	else
		printf("Not a leap year\n");
	
	return 0;
}
