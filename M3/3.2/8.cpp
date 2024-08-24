//8//WAP to print number in reverse order e.g.: number = 64728 ---> reverse =82746
#include<stdio.h>
int main()
{
	int num,rev,rem,i;
	printf("\nEnter the value of num = ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		rem=num%10;
		rev=(rev*10)+rem;
		num=num/10;
	}
	printf("revers number is %d",rev);
	return 0;
}

   
