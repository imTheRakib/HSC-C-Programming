#include<stdio.h>
int main()
{
    int n, track;
    scanf("%d", &n);

    int a[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]); 
    }

    int max = a[0]; // max = 16

    for(int i=1; i<n; i++) // 
    {
        if(a[i] > max) // 16 28 26 74 95 75 23
        {
            max = a[i];
            track = i;
        }
    }

    printf("We find Largest number = %d at position %d and at index %d\n", max, track+1, track);
}