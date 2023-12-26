#include<stdio.h>
int main()
{
    int num1, num2, rem;

    printf("Enter the value of num1: ");
    scanf("%d", &num1);

    printf("Enter the value of num2: ");
    scanf("%d", &num2);

    int n1 = num1;
    int n2 = num2;

    while(n2!=0)
    {
        rem = n1%n2;

        n1 = n2;

        n2 = rem;
    }

    printf("GCD = %d\n", n1);
    printf("LCM = %d\n", (num1*num2)/n1);


}