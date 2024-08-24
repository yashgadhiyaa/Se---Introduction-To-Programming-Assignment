//10//Write a program make a summation of given number (E.g., 1523 Ans: -11) //
#include<stdio.h>
int main()
{
	int i,num,sum,rem;
	printf("\nEnter the value of num := ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		rem=num%10;
		sum=sum+rem;
		num=num/10;
	}
	printf("\nThe ans is = %d",sum);
	return 0;
}
