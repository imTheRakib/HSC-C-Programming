#include<stdio.h>
int main()
{
    // printf("Hello world\n");

    // for(initialization; condition; increment/decrement)

    // ++x --> prefix increment
    // x++ --> postfix increment
    // --x --> prefix decrement
    // x-- --> postfix decrement

    int num=33;

    printf("%d\n",num--); // 33
    printf("%d\n",--num); // 31
    printf("%d\n", num++);  // 31
    printf("%d\n", ++num); // 33
    printf("%d\n",num);  // 33
    printf("%d\n",num);  // 33
    printf("%d\n",num++);  // 33
    printf("%d\n",++num); // 35
    printf("%d\n",num++); // 35
    printf("%d\n",--num); // 35
    printf("%d\n",num++); // 35
    
}