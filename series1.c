// 1 + 2 + 3 + 4 +------------+ n 

#include <stdio.h>
int main()
{
    int n, sum = 0;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        // if (i < n)
        // {
        //     printf("%d + ", i);
        // }
        // else                                // for printing the series
        // {
        //     printf("%d = ", i);
        // }
        sum = sum + i;
    }

    printf("%d\n", sum);
}