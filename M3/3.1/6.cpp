//WAP to convert years into days and days into years 

#include<stdio.h>
int main()
{
	float day,year;
	printf("\nEnter the day =");
	scanf("%f",&day);
	year = day/365;
	
	printf("\nyear is = %.2f",year);
	printf("\nEnter the year = ");
	scanf("%f",&year);
	day=(year*365);
	
	printf("\nday is = %.2f",day);
	return 0;
}

