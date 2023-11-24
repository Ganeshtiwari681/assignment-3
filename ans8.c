//8. Write a C program to input angles of a triangle and check whether triangle is valid or not.
#include<stdio.h>
void main()
{
	int a,b,c;
	scanf(" %d %d %d",&a,&b,&c);
	if(a+b+c==180)
	printf(" vaild ");
	else
	printf("invalid");
}