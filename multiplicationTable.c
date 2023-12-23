#include<stdio.h>
int main()
{
    int num, range;
    printf("Enter the value: ");
    scanf("%d", &num);
    printf("Enter range: ");
    scanf("%d", &range);

    for(int i=1; i<=range; i++)
    {
        printf("%d x %d = %d\n", num, i, num*i);

    }
}