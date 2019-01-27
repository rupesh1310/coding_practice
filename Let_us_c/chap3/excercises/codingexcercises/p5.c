/*A 5 digit number is entered through the keyboard.WAP to obtain the reversed number and to determine whether the original and reversed numbers are equal are not*/

#include<stdio.h>
int main()
{
	int n,a,b,num;
	long int revnum = 0;
	
	printf("\nEnter a 5 digit number less than or equal to 32767\n");
	scanf("%d",&n);
	
	num = n;
	a = n % 10; /*last digit*/
	n = n / 10;
	revnum = revnum + a * 1000L;
	
	a = n % 10;
	n = n / 10; /* 4thd digit*/
	revnum = revnum + a * 1000;
	
	a = n % 10;
	n = n / 10; /*3rd digit */
	revnum = revnum + a * 100;

	a = n % 10;
	n = n / 10;
	revnum = revnum + a * 10;

	if(revnum == num)
		printf("given number is reversed and equal");
	else
		printf("given number is reversed and not equal");
	
	return 0;
}
	
	
