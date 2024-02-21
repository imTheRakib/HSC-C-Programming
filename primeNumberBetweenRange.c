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
        int count1 = 0; // It values the adding of receiving collaborating overall values 

        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                count1++;
                break; // This requirements needs the value of the body & it facts that 
            }
        }

        if (i > 1) // This indicates the random memory management 
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