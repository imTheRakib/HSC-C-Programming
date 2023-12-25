// 1^2 + 2^2 + 3^2 + 4^2 +------------ + n^2

#include <stdio.h>
#include<math.h>
int main()
{
    int n, sum = 0;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum = sum + pow(i,2);
    }

    printf("Sum = %d\n", sum);
}