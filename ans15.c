//write a C program to check even or odd using bitwise operator.
#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
	if((n&1)==1)
	{
		printf("odd");	
	}
	else
	{
		printf("even");
	}
	
	
	
}