/* Whether the character entered through the keyboard is a lower case alphabet or not */
#include<stdio.h>
int main()
{
	char ch;
	
	printf("Enter character:\n");
	scanf("%c",&ch);
	ch >= 97 &&  ch <= 122 ? printf("character entered is lowercase\n") : printf("character entered is not lowecase\n");
	
	return 0;
}
