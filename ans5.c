//5. Write a C program to check whether a character is uppercase or lowercase alphabet.
#include<stdio.h>
void main()
{
	char ch;
	printf(" Enter the character :");
	scanf(" %c",&ch);
	if(ch >='A'&& ch <='Z')
	printf(" Uppercase");
	else
	printf(" Lowercase"); 
}