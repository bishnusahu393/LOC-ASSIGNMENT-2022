// Q 2.  Write a program to find maximum between two numbers.
// (In this question, you’ll learn the use of if-else condition.)
#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter Two Numbers : ");
    scanf("%d%d", &num1, &num2);
    if (num1 > num2)
    {
        printf("%d is maximum", num1);
    }
    else if (num1 < num2)
    {
        printf("%d is maximum", num2);
    }
    return 0;
}