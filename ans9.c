//Write a C program to calculate the Area of two rectangles and print the length and breadth of the rectangle whose greater area
#include<stdio.h>
int main()
{  
    int l1,l2,b1,b2,ar1,ar2;
	scanf(" %d %d %d %d",&l1,&b1,&l2,&b2);
	 ar1=l1*b1;
	 ar2=l2*b2;
	 
	 if(ar1>ar2)
	 printf("%d %d",l1,b1);
	 else
	 printf(" %d %d",l2,b2);
}