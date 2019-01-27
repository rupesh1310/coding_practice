/* If the 3 sides of the triangle are entered through the keyboard WAP to check whether the triangle is valid or not.The triangle is valid if the sum of two sides is greater than the largest of three sides */

#include<stdio.h>
int main()
{
	int side1,side2,side3,largeside,sum;
	
	printf("Enter the three sides of the triangle:\n");
	scanf("%d%d%d",&side1,&side2,&side3);
	
	if(side1 > side2)
		{
			
	if(side1 > side3)
		{
		 sum = side2 + side3;
		 largeside = side1;
		}
	else
		
	  {
		sum =side1 + side2;
		largeside = side3;
	}
  }
	else
{
	if(side2 > side3)
	{
		sum = side1 + side2;
		largeside = side2;
	}
	else
	 {
		sum = side1 + side2;
		largeside = side3;
	}
  }
	
	if(sum > largeside)
		printf("The triangle is valid triangle\n");
	else
		printf("The triangle is invalid triangle\n");
	return 0;
}
