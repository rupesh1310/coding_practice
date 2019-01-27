/*write a program to recieve cartesian coordinate (x,y) of a point and convert them into polar cood(r,&) */

#include<stdio.h>
#include<math.h>
int main()
{
	float x,y,r,theta;
	printf("\nenter x and y cood:");
	scanf("%f%f",&x,&y);

	r =sqrt(x*x+y*y);
	theta=atan2(x,y);
	theta=theta*180/3.14;
	printf("r =%ftheta = %f\n",r,theta);

	return 0;
}

