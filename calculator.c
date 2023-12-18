#include<stdio.h>
#include<conio.h>
int main()
{
    int num1, num2;
    float result;

    printf("Enter the value of num1: ");
    scanf("%d", &num1);

    printf("Enter the value of num2: ");
    scanf("%d", &num2);

    result = num1 + num2;

    printf("Sum = %f\n", result);

    result = num1 - num2;

    printf("Substraction = %f\n", result);

    result = num1 * num2;

    printf("Multiplication = %f\n", result);

    result = num1 / (float)num2; // type casting

    printf("Division = %f\n", result);

    result = num1 % num2;

    printf("Module = %f\n", result);




}