//11//Write a program you have to make a summation of first and last Digit. (E.g.,1234 Ans: -5)//
#include<stdio.h>
int main()
{
	int i,first,last,sum,num;
	printf("\nEnter the value of num = ");
	scanf("%d",&num);
	last=num%10;
	while(num>10)
	{
		num=num/10;
	}
	first=num;
	sum=first+last;
	printf("\nThe ans is = %d",sum);
	return 0;
} 
