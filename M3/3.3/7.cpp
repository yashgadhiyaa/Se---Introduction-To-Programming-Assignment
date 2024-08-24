//7//WAP Find out length of string without using inbuilt function
#include<stdio.h>
int main()
{
	int length,i;
	char rev[100],str[100];
	printf("\nEnter the string = ");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		length++;
	}
	printf("string = %d",length);

}
