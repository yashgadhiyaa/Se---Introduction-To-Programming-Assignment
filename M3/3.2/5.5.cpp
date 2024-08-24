//Sum of even numbers
  
#include<stdio.h>
int main()
{
	int num1,i,counte=0,sum;
	printf("\nEnter the value of num1 = ");
	scanf("%d",&num1);
	for(i=1;i<=num1;i++)
	{
		printf("\n%d",i);
		if(i%2==0)
		{
			
			counte++;
			sum=sum+i;
		}
	
	}
	printf("\n count of even number = %d",counte);
	printf("\n sum of even number is = %d",sum);
	
	return 0; 
}

