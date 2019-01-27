/*Given the length and breadth of the rectangle WAP to find whether  the area of the rectangle is greater than its perimeter
for example a=5 and breadth=4 greater than its perimeter */

#include<stdio.h>
int main()
{
	int l,b,area,peri;
	
	printf("\nEnter length and breadth of rectangle:\n");
	scanf("%d%d",&l,&b);
	
	area = l * b;
	peri  = 2 * ( l + b );
	
	if ( area > peri )
		printf("area is greater than perimeter\n");
	else
		printf("area is lesser than perimeter\n");
	
	return 0;
}
