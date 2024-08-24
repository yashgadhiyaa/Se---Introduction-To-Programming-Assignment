4.1 Monday to Sunday using switch case//
#include<stdio.h>
int main()
{
	int week;
	printf("\nPress 1 to show day");
	printf("\nPress 2 to show day ");
	printf("\nPress 3 to show day");
	printf("\nPress 4 to show day");
	printf("\nPress 5 to show day");
	printf("\nPress 6 to show day");
	printf("\nPress 7 to show day");
	printf("\nEnter the Choice ");
	scanf(" %d",&week);
	switch(week)
	{
		case 1 :
			printf("\nToday is Monday");
			break;
		case 2 :
			printf("\nToday is Tuesday");
			break;
		case 3 :
			printf("\nToday is Wednesday");
			break;
		case 4 :
			printf("\nToday is Thursday");
			break;
		case 5:
			printf("\nToday is Friday");
			break;
		case 6:
			printf("\nToday is Saturday");
			break;
		case 7 :
			printf("\nToday is Sunday");
			break;
		default : printf("\nInvalied input");
	}
}

