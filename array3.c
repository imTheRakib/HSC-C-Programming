#include<stdio.h>
int main()
{
    int a[5];
    int sum=0;

    for(int i=0; i<5; i++)
    {
        scanf("%d", &a[i]);

        sum = sum + a[i];
    }

    for(int i=0; i<5; i++) // 10 + 67 + 78 + 87 + 98 = something
    {
        if(i==4)
        {
            printf("%d ", a[i]);
        }
        else
        {
            printf("%d + ", a[i]);
        }
    }

    printf("= %d", sum);
}