#include<stdio.h>
#include<math.h>
int main()
{
    double num;
    int power;
    
    printf("Enter the number: ");
    scanf("%lf", &num);

    printf("Enter the power of that number: ");
    scanf("%d", &power);

    printf("Result = %lf\n", pow(num, power));
}