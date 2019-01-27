/* 

*/

#include<stdio.h>
int main()
{
	int n;
	
	printf("\n Enter any number\n");
	scanf("%d", &n);
	
	if(n % 2 == 0)
		printf("\nThe number is even\n");
	else
		printf("\nthe number is odd\n");
	
	return 0;
}
