//4.2// Vowel or Consonant using switch case  
#include<stdio.h>
int main()
{
	char ch;
	printf("\nEnter the character = ");
	scanf(" %c",&ch);
	
	switch(ch)
	{
		case 'a': case 'e': case 'i': case 'o': case 'u': 
		case 'A': case 'E': case 'I': case 'O': case 'U':
			printf("\n%c is a vowel",ch);
			break;
			default :
				printf("\n%c is a consonanat",ch);
	}
	return 0;
}
