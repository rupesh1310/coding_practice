/*write a five digit number which is input through the keyboard write a program to reverse the number */

#include<stdio.h>
int main()
{
	int n,a,b;
	long int revnum =0;
	printf("\nenter a five digit number less than 32767");
	scanf("%d",&n);

	a = n%10;/*last digit */
	n=n/10;
	revnum=revnum+a*10000L;

	a=n%10;
	n=n/10;
	revnum=revnum+a*1000;

	a=n%10;
	n=n/10;
	revnum=revnum+a*100;

	a=n%10;
	n=n/10;
	revnum=revnum+a*10;

	a=n%10;
	revnum=revnum+a;

	printf("the reversed number is %d\n",revnum);

	return 0;

}

