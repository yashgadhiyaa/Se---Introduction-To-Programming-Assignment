5.6//Sum of odd numbers  WAP to print table up to given numbers  
#include<stdio.h>
int main()
{
	int num,sum,counto=0,counte,i;
	printf("\nEnter the value of num = ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		printf("\n%d",i);
		if(i%2==0)
		{	
			counte++;
		}
		else
		{
			counto++;
			sum=sum+i;
		}
	}
	printf("\ncount of odd number = %d",counto);
	printf("\nsum of odd number is = %d",sum);
	return 0;	
}

