#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int a[size];
    int sum=0;

    for(int i=0; i<size; i++)
    {
        scanf("%d", &a[i]);

        sum = sum + a[i];
    }

    for(int i=0; i<size; i++) // 10 + 67 + 78 + 87 + 98 = something
    {
        if(i==(size-1))
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