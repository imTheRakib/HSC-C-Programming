#include<stdio.h>
#include<math.h>
int main()
{
    double a, result1, result2, result3;

    scanf("%lf", &a);

    result1 = pow((float)3/4, (float)1/2) * pow(a,2);

    result2 = pow((float)3/4, (float)1/2) * a *a;

    result3 = sqrt((float)3/4) * a *a;

    printf("Result = %lf\n", result1);
    printf("Result = %lf\n", result2);
    printf("Result = %lf\n", result3);


}