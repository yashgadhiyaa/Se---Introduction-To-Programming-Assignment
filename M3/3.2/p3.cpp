/*
		  *
		* * *
	  * * * * *
	* * * * * * *
  * * * * * * * * *

*/
#include<stdio.h>
int main()
{
	int i,j,k,row;
	printf("\nenter the value of row: ");
	scanf("%d",&row);
	for(i=1;i<=row;i++)
	{
		if(i%2!=0)
		{
			for(j=row;j>i;j--)
			{
				printf(" ");
			}
			for(k=1;k<=i;k++)
			{
				printf("* ");
			}
		}
		printf("\n");
	}
	 
	  
}
