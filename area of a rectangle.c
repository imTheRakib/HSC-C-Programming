#include<stdio.h>
int main()
{
   float l, w, area;

   printf("Enter the value of length: ");
   scanf("%f", &l);

   printf("Enter the value of width: ");
   scanf("%f", &w);

    area = l * w;

    printf("Area of the rectangle: %f\n", area);

    getch();
}