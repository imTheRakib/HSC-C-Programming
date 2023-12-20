// Write a c program that define the largest number between two numbers


#include<stdio.h>
int main()
{
    int num1, num2;

    scanf("%d %d", &num1, &num2);

    printf("%d\n", num1);

    if(num1<num2)
    {
         printf("Azan\n");
         printf("%d is smallest between the numbers\n", num1);
    }

    else
    {
        printf("Azan\n");
        printf("%d is smallest between the numbers\n", num2);
    }
}