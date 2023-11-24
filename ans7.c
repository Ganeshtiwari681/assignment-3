//7. Write a C program to enter month number and print total number of days in month. (Excluding Leap Year).
#include<stdio.h>
int main()
{
	int m;
	scanf("%d",&m);
	if(m>0 && m<13)
	 {
	 if(m==1&& m==3&& m==5&& m==7&& m==8&&m==10&&m==12)
	   {printf(" 31 Days");}
	   else if(m==2)
	   printf(" 28 Days");
	   else
		printf("30 Days");
	}
}