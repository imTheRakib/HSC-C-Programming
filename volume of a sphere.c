#include<stdio.h>
#include<math.h>
int main()
{
    double r, volume;

    printf("Enter the radius of the sphere: ");
    scanf("%lf", &r);

    volume = ((float)4/3) * M_PI * (r*r*r);

    printf("Volume of the Sphere: %lf\n", volume);
}