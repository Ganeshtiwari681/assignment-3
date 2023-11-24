//6. Write a C program to print the English word of a digit like (One, Two,Three,......,Nine) if Digit is
//between 1 to 9.Otherwise tell whether it's Even or Odd if Digit is greater than 9.
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n>0 && n<10)
	{ if(n==1)
	printf("one");
	  else if(n==2)
      printf(" two");
      else if(n==3)
      printf(" three");
      else if(n==4)
      printf(" four");
      else if(n==5)
      printf(" five");
      else if(n==6)
      printf(" six");
      else if(n==7)
      printf(" seven");
      else if(n==8)
      printf(" eight");
    else
      printf(" nine");
	  		
	}
	else if(n<0)
	printf(" negative ");
	else
	{ if(n%2==0)
	printf("even");
	else
	printf("odd");
	}
	
	
	
	
	
	
	
}