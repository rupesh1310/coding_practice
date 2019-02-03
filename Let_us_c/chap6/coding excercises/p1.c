/* WAP to print all prime nos from 1 to 300 */
#include<stdio.h>
int main()
{
	int i,n = 1;
	
	printf("Prime numbers between 1& 300 are:\n1\t");
	
	while(n <= 300)
	{
		i = 2;
		while(i < n)
		{
			if(n % i == 0)
				
