/* Given a point (x,y) WAP to find out if it lies on the x-axis,y-axis or in the origin
*/

#include<stdio.h>
int main()
{
	int x,y;
	
	printf("Enter the x and y cood of point:\n");
	scanf("%d%d",&x,&y);
	
	if( x == 0 && y == 0 )
		printf("Point lies on origin\n");
	else
		if( x == 0 && y != 0 )
			printf("Point lies on Y axis\n");
		if( x  != 0 && y == 0 )
			printf("Point lies on X axis\n");
		else
			printf("Point neither lies on any axis, nor origin\n");
		return 0;
}
