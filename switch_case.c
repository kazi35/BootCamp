#include<stdio.h>
int main()
{
	int a,b;
	char choice;
	printf("Enter the valu of A & B : \n");
	scanf("%d %d",&a,&b);
	printf("Enter your choice");
	scanf("%c",&choice);
	

	switch(choice){
		case '+':
			printf("%d +%d=%d",a,b,a+b);
			break;
		case'-':
			printf("%d -%d=%d",a,b,a-b);
		    break;
			
		case '*':
		     printf("%d*%d=%d",a,b,a*b);
		     break;
		case '/':
		     printf("%d /%d=%d",a,b,a/b);
			 break;
	    default:
		printf("Not a valid Number");   
			}
	
	return 0;
}

