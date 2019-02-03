/* Using conditinal operator to dtermine whether a year entered through the keyboard is leap year or not */
#include<stdio.h>
int main()
{
	int year;
	
	printf("Enter year:\n");
	scanf("%d",&year);
	
	year % 100 == 0 ? 
	(year % 400 == 0 ? printf("Leap Year\n") 
	: printf("Not a leap year\n")) 
	: (year % 4 == 0 ? 
	: printf("leap year\n") 
	: printf("Not a leap year\n"));
	
	return 0;
} 
