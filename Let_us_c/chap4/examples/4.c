#include<stdio.h>
int main()
{
	char sex, ms;
	int age;
	
	printf("Enter age ,sex,martial status:\n");
	scanf("%d %c %c",&age,&sex,&ms);
	
	if((ms == 'M') || (ms == 'U' && sex == 'M' && age > 30) || (ms == 'U' && sex == 'F' && age > 25))
		printf("Driver should be insured\n");
	else
		printf("Driver should not be insured\n");
	
	return 0;
}
	
