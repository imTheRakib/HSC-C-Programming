#include<stdio.h>
int main()
{
    int marks;
    printf("Enter the marks: ");
    scanf("%d", &marks);

    if(marks>=80)
    {
        printf("A+\n");
    }
    else if(marks>=70 && marks<80)
    {
        printf("A\n");
    }
    else if(marks>=60 && marks<70)
    {
        printf("A-\n");
    }
    else if(marks>=50 && marks<60)
    {
        printf("B+\n");
    }
    else if(marks>=40 && marks<50)
    {
        printf("C\n");
    }
    else if(marks>=33 && marks<40)
    {
        printf("D\n");
    }
    else
    {
        printf("Fail\n");
    }
}