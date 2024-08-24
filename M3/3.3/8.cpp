//8//WAP to reverse a string and check that the string is palindrome or not  
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100],str2[100];
	int i;
	printf("\nEnter the string in str1 = ");
	gets(str1); 
	strcpy(str2, str1);
	strrev(str1);
	int result = strcmp(str1,str2);
	if(result==0)
	{
		printf("\nString is palindrome");
	}
	else
	{
		printf("\nString is not palindrome");
	}
	return 0;
}
