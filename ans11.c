//Write a C program to check whether triangle is equilateral, scalene or isosceles Input: all side's Length
#include<stdio.h>
void main()
{
	int a,b,c;
	scanf(" %d %d %d",&a,&b,&c);
	if(a==b && a==c)
	printf("equilateral triangle");
	else if(a==b && a!=c||a==c&& a!=b)
	printf(" isosceles triangle");
	else
	printf(" sceles triangle ");
}