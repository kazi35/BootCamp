#include<stdio.h>
int main()
{
	int a1=0,a2=1,num,f,i;
	printf("Enter the rang of fibonacci series:\n");
	scanf("%d",&num);
    //f=a1+a2;
	for( i=2;i<=num;i++){
		f=a1+a2;
		a1=a2;
		a2=f;
		printf("%d\n",f);
		
	}
	
	
	return 0;
}
