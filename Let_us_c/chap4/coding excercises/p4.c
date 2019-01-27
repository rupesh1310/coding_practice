/* If the three sides of the triangle are entered through the keyboard WAP to check whether the triangle is isosceles,equilateral,scalene or right-angled triangle */

#include<stdio.h>
int main()
{
	int s1,s2,s3,a,b,c;
	
	printf("Enter three sides of a triangle:\n");
	scanf("%d%d%d",&s1,&s2,&s3);
	
	if(s1 != s2 && s2 != s3 && s3 != s1)
		printf("Scalene triangle\n");
	if((s1 == s2) && (s2 != s3))
		printf("Isosceles triangle\n");
	if((s2 == s3) && (s3 != s1))
		printf("Isosceles triangle\n");
	if((s1 == s3) && (s3 != s2))
		printf("Isoscelec triangle\n");
	if((s1 == s2 && s2 == s3))
		printf("Equilateral triangle\n");
	
	a = (s1*s1) == (s2*s2) + (s3*s3);
	b = (s2*s2) == (s1*s1) + (s3*s3);	
	c = (s3*s3) == (s1*s1) + (s2*s2);
	
	if(a || b || c)
		printf("Right-angled triangle\n");
	
	return 0;
} 
