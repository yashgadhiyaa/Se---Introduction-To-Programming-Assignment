//2// WAP of addition,subtraction,multiplication and division using switch case.
#include<stdio.h>
//function calculator

//with return type with argument
int add1(int num1, int num2);
int sub1(int num1, int num2);
int mul1(int num1, int num2);
float div1(int num1, int num2);

//with return type without argument
int add2();
int sub2();
int mul2();
float div2();

//without return type with argument
void add3(int num1, int num2);
void sub3(int num1, int num2);
void mul3(int num1, int num2);
void div3(int num1, int num2);

//without return type without argument
void add4();
void sub4();
void mul4();
void div4();

int main()
{
	int num1,num2,ans,choice;
	float result;
	printf("\n1.with return type with argument");
	printf("\n2.with return type without argument");
	printf("\n3.without return type with argument");
	printf("\n4.without return type without argument");
	printf("\nEnter your choice = ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("\nEnter the value of num1 = ");
			scanf("%d",&num1);
			printf("\nEnter the value of num1 = ");
			scanf("%d",&num2);
			printf("\n1.Addition");
			printf("\n2.Subtraction");
			printf("\n3.Multiplication");
			printf("\n4.Division");
			printf("\nEnter your choice = ");
			scanf("%d",&choice);
			
			switch(choice)
			{
				case 1:
					ans = add1(num1,num2);
					printf("\nThe addition of %d and %d is %d",num1,num2,ans);
				break;
				case 2:
					ans = sub1(num1,num2);
					printf("\nThe subtraction of %d and %d is %d",num1,num2,ans);
				break;
				case 3:
					ans = mul1(num1,num2);
					printf("\nThe multiplication of %d and %d is %d",num1,num2,ans);
				break;
				case 4:
					result = div1(num1,num2);
					printf("\nThe division of %d and %d is %.2f",num1,num2,result);
				break;
				default : printf("\nInvalid input");
			}
		break;
		case 2:
			printf("\n1.Addition");
			printf("\n2.Subtraction");
			printf("\n3.Multiplication");
			printf("\n4.Division");
			printf("\nEnter your choice = ");
			scanf("%d",&choice);
			
			switch(choice)
			{
				case 1:
					ans = add2();
					printf("\nThe addition is %d",ans);
				break;
				case 2:
					ans = sub2();
					printf("\nThe subtraction is %d",ans);
				break;
				case 3:
					ans = mul2();
					printf("\nThe multiplication is %d",ans);
				break;
				case 4:
					result = div2();
					printf("\nThe division is %.2f",result);
				break;
				default : printf("\nInvalid input");
			}
		break;
		case 3:
			printf("\nEnter the value of num1 = ");
			scanf("%d",&num1);
			printf("\nEnter the value of num1 = ");
			scanf("%d",&num2);
			printf("\n1.Addition");
			printf("\n2.Subtraction");
			printf("\n3.Multiplication");
			printf("\n4.Division");
			printf("\nEnter your choice = ");
			scanf("%d",&choice);
			
			switch(choice)
			{
				case 1:
					add3(num1,num2);
				break;
				case 2:
					sub3(num1,num2);
				break;
				case 3:
					mul3(num1,num2);
				break;
				case 4:
					div3(num1,num2);
				break;
				default : printf("\nInvalid input");
			}
		break;
		case 4:
			printf("\n1.Addition");
			printf("\n2.Subtraction");
			printf("\n3.Multiplication");
			printf("\n4.Division");
			printf("\nEnter your choice = ");
			scanf("%d",&choice);
			
			switch(choice)
			{
				case 1:
					add4();
				break;
				case 2:
					sub4();
				break;
				case 3:
					mul4();
				break;
				case 4:
					div4();
				break;
				default : printf("\nInvalid input");
			}
		break;
		default : printf("\nInvalid choice");
	}
	
	return 0;
}

//with return type with argument
int add1(int num1, int num2)
{
	int ans;
	ans = num1 + num2;
	return ans;
}
int sub1(int num1, int num2)
{
	int ans;
	ans = num1 - num2;
	return ans;
}
int mul1(int num1, int num2)
{
	int ans;
	ans = num1 * num2;
	return ans;
}
float div1(int num1, int num2)
{
	float result;
	result = (float)num1 / (float)num2;
	return result;
}

//with return type without argument
int add2()
{
	int num1,num2,ans;
	printf("\nEnter the value of num1 = ");
	scanf("%d",&num1);
	printf("\nEnter the value of num2 = ");
	scanf("%d",&num2);
	ans = num1 + num2;
	return ans;
}
int sub2()
{
	int num1,num2,ans;
	printf("\nEnter the value of num1 = ");
	scanf("%d",&num1);
	printf("\nEnter the value of num2 = ");
	scanf("%d",&num2);
	ans = num1 - num2;
	return ans;
}
int mul2()
{
	int num1,num2,ans;
	printf("\nEnter the value of num1 = ");
	scanf("%d",&num1);
	printf("\nEnter the value of num2 = ");
	scanf("%d",&num2);
	ans = num1 * num2;
	return ans;
}
float div2()
{
	int num1,num2;
	float result;
	printf("\nEnter the value of num1 = ");
	scanf("%d",&num1);
	printf("\nEnter the value of num2 = ");
	scanf("%d",&num2);
	result = (float)num1 / (float)num2;
	return result;
}

//without return type with argument
void add3(int num1, int num2)
{
	int ans;
	ans = num1 + num2;
	printf("\nThe addition of %d and %d is %d",num1,num2,ans);
}
void sub3(int num1, int num2)
{
	int ans;
	ans = num1 - num2;
	printf("\nThe subtraction of %d and %d is %d",num1,num2,ans);
}
void mul3(int num1, int num2)
{
	int ans;
	ans = num1 * num2;
	printf("\nThe multiplication of %d and %d is %d",num1,num2,ans);
}
void div3(int num1, int num2)
{
	float result;
	result = (float)num1 / (float)num2;
	printf("\nThe division of %d and %d is %.2f",num1,num2,result);
}

//without return type without argument
void add4()
{
	int ans,num1,num2;
	printf("\nEnter the value of num1 = ");
	scanf("%d",&num1);
	printf("\nEnter the value of num2 = ");
	scanf("%d",&num2);
	ans = num1 + num2;
	printf("\nThe addition of %d and %d is %d",num1,num2,ans);
}
void sub4()
{
	int ans,num1,num2;
	printf("\nEnter the value of num1 = ");
	scanf("%d",&num1);
	printf("\nEnter the value of num2 = ");
	scanf("%d",&num2);
	ans = num1 - num2;
	printf("\nThe subtraction of %d and %d is %d",num1,num2,ans);
}
void mul4()
{
	int ans,num1,num2;
	printf("\nEnter the value of num1 = ");
	scanf("%d",&num1);
	printf("\nEnter the value of num2 = ");
	scanf("%d",&num2);
	ans = num1 * num2;
	printf("\nThe multiplication of %d and %d is %d",num1,num2,ans);
}
void div4()
{
	int num1,num2;
	float result;
	printf("\nEnter the value of num1 = ");
	scanf("%d",&num1);
	printf("\nEnter the value of num2 = ");
	scanf("%d",&num2);
	result = (float)num1 / (float) num2;
	printf("\nThe addition of %d and %d is %.2f",num1,num2,result);
}


