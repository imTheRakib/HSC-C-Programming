#include<stdio.h>
int main()
{
    int n, mul=1;
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        if (i < n)
        {
            printf("%d x ", i);
        }
        else                                // for printing the series
        {
            printf("%d = ", i);
        }
        mul = mul * i;
    }

    printf("%d\n",mul);
}