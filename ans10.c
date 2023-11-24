//Write a C program to find all roots of a quadratic equation.
#include<stdio.h>
#include<math.h>
int main()
{
	float r1,r2,a,b,c,D;
	scanf("%f %f %f",&a,&b,&c);
	// quadractic equation ax^2+bx+c=0
	D=b*b-4*a*c;
	if(D>0)
	{
	 r1=(-b+sqrt(D))/(2*a);
	r2=(-b-sqrt(D))/(2*a);
    }
    
	printf(" root 1 :%.2f",r1);
	printf(" root 2 :%.2f",r2);
	return 0;
}