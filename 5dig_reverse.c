#include<stdio.h>
int main()
{
	int num,a,b,c,d,e,d1,d2,d3,d4,d5,sum;
	printf("Enter the value of int: \n");
	scanf("%d",&num);
	
	a=num/10;
	d5=num%10;
	b=a/10;
	d4=a%10;
	c=b/10;
	d3=b%10;
	d=c/10;
	d2=c%10;
	e=d/10;
	d1=d%10;
	
	
	sum=d5+d4+d3+d2+d1;
	printf("Reverse number: \n");
	printf("%d\t%d\t%d\t%d\t%d",d5,d4,d3,d2,d1);
	
	
	
	
	return 0;
}
