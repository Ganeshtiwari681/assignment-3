//Write a C program to input any character and check whether it is alphabet, digit or special character.
#include<stdio.h>
void main()
{
	char a;
	printf("enter the character :");
	scanf("%c",&a);
	if(a>='a'&& a<='z'||a>='A'&&a<='Z')
	printf("character is alphabet");
	else if(a>='0'&&a<='9')
	printf(" character is digit ");
	else
	printf("charcter is special character");
	
}