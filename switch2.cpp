#include<stdio.h>
int main()
{
	int choice;
	printf("Option are given below: \n");
	printf("1. 80 to 100 \n");
	printf("2. 70 to 79 \n");
	printf("3. 60 to 69 \n");
	printf("4. 50 to 59 \n");
	printf("5. 40 to 49 \n");
	printf("6.0 to 39\n");
	printf("Enter your choice:\n");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			printf("You have got A+ \n");
			break;
		case 2:
				printf("You have got A \n");
			break;
		case 3:
				printf("You have got B \n");
			break;
		case 4:
				printf("You have got C \n");
			break;
		case 5:
				printf("You have got D \n");
			break;
		case 6:
				printf("You have got F \n");
			break;
		default:
		printf("Invalid Input ");			
		
	}
	return 0;
}
