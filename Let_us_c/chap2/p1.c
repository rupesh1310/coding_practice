/* If a five digit number is input through the keyboard write a program to calculate the sum of its digits.*/

#include<stdio.h>
int main()
{
	int num,a, n;
	int sum = 0;
	printf("enter a five digit number less than 32767");
	scanf("%d",&num);
	a = num % 10; /*last digit extracted as remainder */
	n = n / 10;
	sum = sum + a;

	a = n%10;
	n = n/10;
	sum =sum +a;

	a = n%10;
	n= n/10;
	sum = sum+a;

	a = n%10;
	n=n/10;
	sum=sum+a;

	a=n%10;
	sum = sum+a;

	printf("the sum of 5 digits of %d is %d\n",num,sum);

	return 0;
}




