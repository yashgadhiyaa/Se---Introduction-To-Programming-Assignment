//Write a program to make Simple calculator (to make addition, subtraction, multiplication, division and modulo)//
//Simple calculator  
#include<stdio.h>
int main()
{
	int num1,num2;
	//Addition
	printf("\nEnter the value of num1 = ");
	scanf("%d",&num1);
	printf("\nEnter the value of num2 = ");
	scanf("%d",&num2);
	printf("\n the addition of %d and %d is %d",num1,num2,num1+num2);
	
	//subtraction
	printf("\nEnter the value of num1 = ");
	scanf("%d",&num1);
	printf("\nEnter the value of num2 = ");
	scanf("%d",&num2);
	printf("\n the subtraction of %d and %d is %d",num1,num2,num1-num2);
	
	//Multiplication
	printf("\nEnter the value of num1 = ");
	scanf("%d",&num1);
	printf("\nEnter the value of num2 = ");
	scanf("%d",&num2);
	printf("\n the Multiplication of %d and %d is %d",num1,num2,num1*num2);
	
	//Division
	printf("\nEenter the value of num1 = ");
	scanf("%d",&num1);
	printf("\nEenter the value of num2 = ");
	scanf("%d",&num2);
	printf("\n the division of %d and %d is %d",num1,num2,num1/num2);
	
	//remainder
	printf("\nEenter the value of num1 = ");
	scanf("%d",&num1);
	printf("\nEenter the value of num2 = ");
	scanf("%d",&num2);
	printf("\n the division of %d and %d is %d",num1,num2,num1%num2);
	return 0;
}
