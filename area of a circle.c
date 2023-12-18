#include<stdio.h>
#include<math.h>
int main()
{
    double r, area;

    printf("Enter the value of radious: ");
    scanf("%lf", &r);

    area = M_PI * r * r;

    printf("Area = %lf\n", area);
}