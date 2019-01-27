/* if the marks obtained by a student in five different subjects are input through the keyboard,WAP to find out the aggregate marks and percentage marks obtained by the student.Assume that the maximum marks that can be obtained by each student in each subjects is 100. */

#include<stdio.h>
int main()
{
	int m1,m2,m3,m4,m5,aggr;
	float per;

	printf("\nEnter the marks in 5 subjects:");
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);

	aggr = m1+m2+m3+m4+m5;
	per = aggr/5;

	printf("Aggregrate marks=%d\n",aggr);
	printf("Percentage marks=%d\n",per);

	return 0;
}

