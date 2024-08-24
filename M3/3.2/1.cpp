//1//WAP to make simple calculator (operation include Addition, Subtraction,Multiplication, Division, modulo)//
#include<stdio.h>
int main()
{
 	int choice;
	int num1,num2;
	
	printf("\nPress '+' to perform addition");
	printf("\nPress '-' to perform subtraction");
	printf("\nPress '*' to perform multiplication");
	printf("\nPress '/' to perform division");
	printf("\nPress 'r' to perform remainder");
	printf("\nEnter the choice = ");
	scanf(" %c",&choice);
	
	switch(choice)
	{
		case '+' :
			printf("\nEnter the value of num1 = ");
			scanf("%d",&num1);
	  		printf("\nEnter the value of num2 = ");
			scanf("%d",&num2);
			printf("\n the addition of %d and %d is %d",num1,num2,num1+num2);
		break;  
		case '-' :
			printf("\nEnter the value of num1 = ");
			scanf("%d",&num1);
	  		printf("\nEnter the value of num2 = ");
			scanf("%d",&num2);
			printf("\n the subtraction of %d and %d is %d",num1,num2,num1-num2);
		break;
		case '*' :
			printf("\nEnter the value of num1 = ");
			scanf("%d",&num1);
	  		printf("\nEnter the value of num2 = ");
			scanf("%d",&num2);
			printf("\n the multiplication of %d and %d is %d",num1,num2,num1*num2);
		break;
		case '/' :
			printf("\nEnter the value of num1 = ");
			scanf("%d",&num1);
	  		printf("\nEnter the value of num2 = ");
			scanf("%d",&num2);
			printf("\n the division of %d and %d is %d",num1,num2,num1/num2);
		break;
		case '%' :
			printf("\nEnter the value of num1 = ");
			scanf("%d",&num1);
	  		printf("\nEnter the value of num2 = ");
			scanf("%d",&num2);
			printf("\n the remainder of %d and %d is %d",num1,num2,num1%num2);
		break;
		default : printf("\nInvalid input");
	}
	return 0;	

