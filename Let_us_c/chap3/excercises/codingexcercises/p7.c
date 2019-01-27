/* WAP to check whether a traingle is valid or not, when the three angles of the entered.A triangle is valid if the sum of all angles is equal to 180.
*/

#include<stdio.h>
int main()
{
	float angle1,angle2,angle3;
	
	printf("\nEnter three angles of triangle:\n");
	scanf("%f\n%f\n%f",&angle1,&angle2,&angle3);

	if( ( angle1 + angle2 + angle3 ) == 180 )
		printf("The triangle is valid triangle\n");
	else
		printf("The triangle is invalid\n");
	
	return 0;
}
