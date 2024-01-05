#include<stdio.h>
int main()
{
    int a[6];

    // scanf("%d %d %d %d %d", &a[0], &a[1],&a[2],&a[3],&a[4]);

    // printf("%d\n", a[0]);
    // printf("%d\n", a[1]);
    // printf("%d\n", a[2]);
    // printf("%d\n", a[3]);
    // printf("%d\n", a[4]);

    // user input
    int i;
    for(i=0; i<6; i++)
    {
        scanf("%d", &a[i]);
    }
    

    user output
    for(int i=0; i<5; i++)
    {
        printf("%d\n", a[i]);
    }
}