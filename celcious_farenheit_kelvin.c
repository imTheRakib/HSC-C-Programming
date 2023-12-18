#include<stdio.h>
int main()
{
    float c, k;
    printf("Enter the celsius temp: ");
    scanf("%f", &c);

    k = c + 273;

    printf("Kelvin temp: %f\n", k);

}


// C/5 = (F-32)/9 = (K-273)/5

// celsius to kelvin
// C/5 = (K-273)/5
// K-273 = C
// K = C + 273

// kelvin to farenheit
// (f-32)/9 = (K-273)/5
// f -32 = (k-273)*9/5
// f = (k-273)*9/5) + 32


