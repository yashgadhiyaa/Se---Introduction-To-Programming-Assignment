//4. How many odd numbers are there

//How many odd numbers are there 
#include<stdio.h>
int main()
{
	int num1,num2,i,counte=0,counto=0;
	printf("\nEnter the value of num1 = ");
	scanf("%d",&num1);
	for(i=1;i<=num1;i++)
	{
		printf("\n%d",i);
		if(i%2==0)
		{
			
			counte++;
		}
		else
		{
			counto++;
		}
	
	}
	printf("\n count of odd number = %d",counto);
	
	return 0;
	
}

