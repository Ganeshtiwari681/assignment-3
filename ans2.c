//Write a C program to check whether a number is divisible by 5 and 11 or not.
#include<stdio.h>
void main()
{
	int a;
	printf("  Enter the Number ");
	scanf("%d",&a);
	if(a%5==0 && a%11==0)
	printf(" Number is divisible by 5 & 11 ");
	else
	printf("Number is not divisible by 5 & 11");
}