#include<stdio.h>

int main(){

    float marks;
    int grade;

    printf("Enter your Mathematic subject marks to see Grade\n");
    printf("your marks: ");
    scanf("%f",&marks);
    grade=marks/10;


    switch (grade){
    case 10:
    case 9:
    case 8:
        printf("your Grade: A+");
        break;
    case 7:
        printf("your Grade: A");
        break;
    case 6:
        printf("your Grade: A-");
        break;
    case 5:
        printf("your Grade: B");
        break;
    case 4:
        printf("your Grade: C");
        break;
    case 3:
    case 2:
    case 1:

        printf("Fail");
        break;
    default:
        printf("Invalid Number");

    }

    return 0;
}
