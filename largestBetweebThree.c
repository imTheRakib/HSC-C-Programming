// Write a c program that define the largest number between three numbers


#include<stdio.h>
int main()
{
    int num1, num2, num3, num4;

    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    if(num1>num2 && num1>num3 && num1>num4) // 23 12 54
    {
         printf("%d is largest between the numbers\n", num1);
    }

    else if(num2>num1 && num2>num3 && num2>num4)
    {
        printf("%d is largest between the numbers\n", num2);
    }

    else if(num3>num1 && num3>num2 && num3>num4)
    {
        printf("%d is largest between the numbers\n", num3);
    }

    else
    { 
        printf("%d is largest between the numbers\n", num4);
    }
}