/*WAP to print the multiplication of a table of the number entered by the user.The table should get displayed in following form 29*1=29 */

#include<stdio.h>
int main()
{
	int i,num;
	
	printf("Enter the number:\n");
	scanf("%d",&num);
	
	for(i = 1; i <= 10 ; i++)
		printf("%d * %d = %d\n",num,i,num * i);
	return 0;
}
