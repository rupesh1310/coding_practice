/* ASCII Values */
#include<stdio.h>
int main()
{
	char ch;
	
	printf("Enter a character from keyboard:\n");
	scanf("%c",&ch);
	
	if(ch >= 65 && ch <= 90)
		printf("The character is uppercase letter\n");
	if(ch >= 97 && ch <= 122)
		printf("The character is lowercase letter\n");
	if(ch >= 48 && ch <= 57)
		printf("The character is digit\n");
	if((ch >= 0 && ch < 48) || (ch > 57 && ch < 65) || (ch > 90 && ch < 97) || (ch > 122))
		printf("The character is special symbol\n");

	return 0;
}
