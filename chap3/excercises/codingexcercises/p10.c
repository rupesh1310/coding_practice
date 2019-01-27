/*Given three points (x1,y1),(x2,y2),(x3,y3) WAP to check if all three points fall on one straight line */

#include<stdio.h>
#include<math.h>

int main()
{
	int x1,y1,x2,y2,x3,y3;
	int s1,s2,s3;
	
	printf("\nEnter the values of x1 and y1 coordiantes of the first point:\t");
	scanf("%d%d",&x1,&y1);
	
	printf("\nEnter the values of x2 and y2 coordiantes of the first point:\t");
	scanf("%d%d",&x2,&y2);
	
	printf("\nEnter the values of x3 and y3 coordiantes of the first point:\t");
	scanf("%d%d",&x3,&y3);
	
	s1 = ( x2 - x1 ) / ( y2 - y1 );
	s2 = ( x3 - x1 ) / ( y3 - y1 );
	s3 = ( x3 - x2 ) / ( y3 - y2 );
	
	if ( ( s1 == s2 ) && ( s1 == s3 ) )
		printf("Points are Co-linear\n");
	else
		printf("Points are not Co-linear\n");
	
	return 0;
}
	
