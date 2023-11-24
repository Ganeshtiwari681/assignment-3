//Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition:
#include<stdio.h>
#include<math.h>
 void main()
 {
 	int unit;
 	float a,bill,sur_charge;
 	scanf("%d",&unit);
 	 
 	if(unit<=50)
	{
	    a = unit*0.50;
	}
	else if(unit<=150)
	{
		a = 25+((unit-50)*0.75);
	}
 	else if(unit<=250)
	 {
	    a = 100 +((unit-150)*1.2);	
	 }
	 else
	 {
	 	a = 220+((unit-250)*1.5);
	 }
	  sur_charge = a*0.2; 
	 bill = a + sur_charge;
	 printf(" bill = %.2f",bill);
 }