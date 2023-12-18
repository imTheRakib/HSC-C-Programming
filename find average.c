#include<stdio.h>
int main()
{
    int num1, num2, num3;

    printf("Enter the value of num1: ");
    scanf("%d", &num1);

    printf("Enter the value of num2: ");
    scanf("%d", &num2);

    printf("Enter the value of num3: ");
    scanf("%d", &num3);

    printf("Average = %f\n", (float)(num1+num2+num3)/3); // type casting


}