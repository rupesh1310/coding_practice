#include<stdio.h>
int main()
{
	int l,b,r,perimeter;
	float area1,area2,circum;

	printf("\nEnter length,breadth of rectangle:");
	scanf("%d%d",&l,&b);

	area1 = l*b;
	perimeter=2*l+2*b;

	printf("Area of rectangle= %d\n",area1);
	printf("Perimeter of rect=%d\n",perimeter);

	printf("Enter the radius of circle:");
	scanf("%d",&r);

	area2=3.14*r*r;
	circum=2*3.14*r;

	printf("Area of circle=%f\n",area2);
	printf("circumference of circle=%f\n",circum);

	return 0;
}
