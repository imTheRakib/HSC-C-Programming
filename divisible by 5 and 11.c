// Write a C program to check whether a number is divisible by 5 and 11 or not.

#include<stdio.h>
int main()
{
    int num;
    scanf("%d", &num);

    if(num%5==0 && num%11==0)
    {
        printf("%d is divisible by 5 and 11\n", num);
    }

    else
    {
        printf("%d is not divisible by 5 and 11\n", num);
    }
}