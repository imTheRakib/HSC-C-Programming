// Write a C program to check whether a year is leap year or not.
// https://codeforwin.org/c-programming/if-else-programming-practice

#include<stdio.h>
int main()
{
    int year;
    scanf("%d", &year);

    // if(year%400==0)
    // {
    //     printf("%d is leap-year\n", year);
    // }

    // else if(year%4 == 0 && year%100 != 0)
    // {
    //     printf("%d is leap-year\n", year);
    // }

    // else
    // {
    //     printf("%d is not leap-year\n", year);
    // }

    if((year%400==0) || (year%4 == 0 && year%100 != 0))
    {
        printf("%d is leap-year\n", year);
    }

    else
    {
        printf("%d is not leap-year\n", year);
    }
}