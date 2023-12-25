#include <stdio.h>
int main()
{
    int start, end;

    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("\n");
    
    int count2 = 0;

    for (int i = start; i <= end; i++)
    {
        int count1 = 0;

        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                count1++;
                break;
            }
        }

        if (i > 1)
        {
            if (count1 == 0)
            {
                printf("%d ", i);
                count2++;
            }
        }
    }
    printf("\n\nTotal prime numbers between %d to %d = %d\n", start, end, count2);
}