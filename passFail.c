#include<stdio.h>
int main()
{
    int marks;
    printf("Enter the marks: ");
    scanf("%d", &marks);

    if(marks<33)
    {
        printf("Fail\n");
    }
    else
    {
        printf("Pass\n");
    }
}