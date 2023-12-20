#include <stdio.h>
int main()
{
    int num;

    printf("Decimal to octal & hexa-decimal\n");
    scanf("%d", &num);
    printf("Octal = %o\n", num);
    printf("Hexa-decimal = %x\n", num);

    printf("Octal to Decimal & hexa-decimal\n");
    scanf("%o", &num);
    printf("Decimal = %d\n", num);
    printf("Hexa-decimal = %x\n", num);

    printf("Hexa-decimal to Decimal & octal\n");
    scanf("%x", &num);
    printf("Decimal = %d\n", num);
    printf("Octal = %o", num);
}