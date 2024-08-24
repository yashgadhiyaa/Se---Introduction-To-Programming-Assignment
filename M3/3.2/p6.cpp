/*
A 
A B 
A B C
A B C D
A B C D E
*/
#include<stdio.h>
int main()
{
	int row,i,j;
	char temp='A';
	printf("\nEnter the row number = ");
	scanf("%d",&row);

	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
		{
			temp=temp+j;
			printf(" %c",temp-1);
			temp='A';
		}
		printf("\n");
	}
	
	return 0;
}
