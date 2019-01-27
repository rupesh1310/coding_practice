/* Given the coordinates (x,y) of center of center of a circle and its radius WAP that will determine whether a point lies inside the circle,on the circle or outside the circle. */

#include<stdio.h>
int main()
{
	int x,y,r;
	int dis, d;
	
	printf("Enter radius of a circle and coord. of point(x,y):\n");
	scanf("%d%d%d",&r,&x,&y);
	
	dis = x * x + y * y;
	d   = r * r;
	
	if(dis == d)
		printf("Point is on the circle\n");
	else
	 {
		if ( dis > d )
			printf("Point is outside the circle\n");
		else
			printf("Point is inside the circle\n");
	}
	
	return 0;
}
