//WAP to input marks of five subject phy,chem,bio,math,and Computer.
// Calculate percentage and grade according to following:
#include<stdio.h>
int main()
{
	float ph,ma,ch,co,bi;
	float per;
	printf(" Input marks of five subjects :");
	scanf("%f",&ph);
	scanf("%f",&ma);
	scanf("%f",&ch);
	scanf("%f",&co);
	scanf("%f",&bi);
	per=(ph+ma+ch+co+bi)/5;
	printf("%.2f",per);
	if(per>=90)
	printf("Grade A");
	else if(per>=80)
	printf("Grade B");
	else if(per>=70)
	printf("Grade C");
	else if(per>=60)
	printf("Grade D");	
	else if(per>=40)
	printf("Grade E");
	else
	printf("Grade F");
}