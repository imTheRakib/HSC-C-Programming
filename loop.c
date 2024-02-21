// #include<stdio.h>
// void result(int d){
//     printf("%d",d);
// }
// int main()
// {
//     int a,b,c;
//     scanf("%d %d %d",&a, &b, &c);

//     if(a>b && a>c)
//     result(a);
//     else if(b>a && b>c)
//     result(b);
//     else
//     result(c);
// }

#include<stdio.h>
int main()
{
    int k, n, sum=0;
    scanf("%d", &n);
    do{
       sum = sum+k;
       k=k+3;     
    }while(k<=n);

    printf("%d", sum);
}