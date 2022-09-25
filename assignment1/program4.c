#include<stdio.h>
void main(){
	int monthno;

	printf("Enter the month number:\n");
	scanf("%d",&monthno);

	switch(monthno){
case 1:
		printf("jan has 31 days\n");
		break;

case 2:

		printf("feb has 28 days\n");
		break;

case 3:

		printf("march has 31 days\n");
		break;

case 4:

		printf("April has 30 days\n");
		break;

case 5:

		printf("May has 31 days\n");
		break;

case 6:

		printf("June has 30 days\n");
		break;

case 7:

		printf("July has 31 days\n");
		break;

case 8:

		printf("Aug has 31 days\n");
		break;

case 9:

		printf("Sept has 30 days\n");
		break;

case 10:

		printf("Oct has 31 days\n");
		break;

case 11:

		printf("Nov has 30 days\n");
		break;

case 12:

		printf("Dec has 31 days\n");
		break;

		default:

		printf("You entered wrong month number\n");
		break;


	}
}
