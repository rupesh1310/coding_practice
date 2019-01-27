/* WAP to find the absolute value of a number entered through the keyboard */
#include<stdio.h>
int main()
{
	int no;
	
	printf("\nEnter any number:\n");
	scanf("%d",&no);
	if(no < 0)
		no = no * -1;
	printf("The absolute value of given number is %d\n",no);
	
	return 0;
}
