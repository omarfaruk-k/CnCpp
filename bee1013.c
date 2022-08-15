#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){

    int a,b,c,big1,biggest;

    scanf("%d %d %d", &a,&b,&c);

    big1 = (a+b+abs(a-b))/2;
    biggest = (big1+c+abs(big1-c))/2;

    printf("%d eh o maior",biggest);

    return 0;
}