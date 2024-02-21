#include <stdio.h>

int sum(int n1, int n2)
{
    int result = n1 + n2;
    return result;
}
int sub(int n1, int n2)
{
    int result = n1 - n2;
    return result;
}
int mul(int n1, int n2)
{
    int result = n1 * n2;
    return result;
}
int div(int n1, int n2)
{
    int result = n1 / n2;
    return result;
}
int main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    
    printf("sum = %d\n", sum(num1, num2));
    printf("sub = %d\n", sub(num1, num2));
    printf("mul = %d\n", mul(num1, num2));
    printf("div = %d\n", div(num1, num2));
}