//Write a C program to check whether a number is negative, positive or zero.
#include<stdio.h>
void main()
{
	int a;
	printf("Enter the value ");
	scanf("%d",&a);
	if(a>0)
	printf("Number is positive %d",a);
	else if (a<0)
	printf("Number is negative %d",a);
	else
	printf("Number is zero %d",a);
}