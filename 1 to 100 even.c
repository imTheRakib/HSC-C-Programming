#include<stdio.h>
int main()
{
    int start, end;
    scanf("%d %d", &start, &end);

    for(int i=start; i<=end; i++)
    {
        if(i%5==0 && i%11==0)
        {
            printf("%d ", i);
        }
    }
}