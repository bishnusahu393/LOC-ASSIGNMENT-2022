// Write a C program to enter two numbers and perform all arithmetic operations using
// switch case.
#include <stdio.h>

int main()
{
    int cho,num1,num2;
    printf("Enter 1 for Addition \n Enter 2 for Substraction \n Enter 3 for Multiplication \n Enter 4 for Division \n Enter 5 for division ");
    printf("Enter your Choices By (1,2,3,4,5) : ");
    scanf("%d",&cho);
    printf("Enter two number ");
    scanf("%d",&num1);
    scanf("%d",&num2);
    switch (cho)
    {
    case 1:
        printf("The Sum of %d and %d is %d",num1,num2,num1+num2);
        break;
    case 2:
        printf("The Difference of %d and %d is %d",num1,num2,num1-num2);
        break;
    case 3:
        printf("The Product of %d and %d is %d",num1,num2,num1*num2);
        break;
    case 4:
        printf("The division of %d and %d is %.2f",num1,num2,(float)num1/num2);
        break;
    case 5:
        printf("The Modulus of %d and %d is %d",num1,num2,num1%num2);
        break;
    
    default:
    printf("You are not followed the above instructions");
        break;
    }
    return 0;
}
