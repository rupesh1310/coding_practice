#include<stdio.h>
int main()
{
	int c,sub;
	
	printf("Enter the class and number of subjects failed:\n");
	scanf("%d\n%d\n",&c,&sub);
	
	switch(c)
	{
		case 1:
			if(sub<=3)
			   printf("Student gets the total of %d grace marks\n",5*sub);
			else
			   printf("No grace marks\n");
			break;
		case 2:
			if(sub <= 2)
			   printf("Student gets the total of %d grace marks\n",4*sub);
			else
			   printf("No grace marks\n");
			break;
		case 3:
			if(sub == 1)
			   printf("Student gets 5 grace marks\n");
			else
			   printf("No grace marks\n");
			break;
		default:
			printf("wrong class entered\n");
		}
		  return 0;
	}
