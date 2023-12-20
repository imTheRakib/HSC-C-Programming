#include<stdio.h>
int main()
{
    char ch;
    
    scanf("%c", &ch); // user input --> A

    if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    {
        printf("%c is Vowel\n", ch);
    }

    else
    {
        printf("%c is consonant\n", ch);
    }
}