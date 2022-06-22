#include<stdio.h>
int main(){

    int marks;
    printf("Enter any marks: ");
    scanf("%d", &marks);

    switch(marks){
    case 0 ... 39:
        printf("You have got: F");
        break;
    case 40 ... 49:
        printf("You have got: D");
        break;
    case 50 ... 59:
        printf("You have got: C");
        break;
    case 60 ... 69:
        printf("You have got: B");
        break;
    case 70 ... 79:
        printf("You have got: A");
        break;
    case 80 ... 100:
        printf("You have got: A+");
        break;
    default:
        printf("Not a valid choice");

    }

}
