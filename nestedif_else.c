#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter the value of 3 numbers:\n ");
scanf("%d %d %d",&a,&b,&c);
if(a>b){
if(a>c){
	printf("%d is the largest number\n");
	
}
else{
	printf(" %d is the largest");
}
}
else{
	if(b>c){
		printf("B is the greatest");
		}
	else{
		printf("C is the greatest");
	}
}	
	
	
	return 0;
}
