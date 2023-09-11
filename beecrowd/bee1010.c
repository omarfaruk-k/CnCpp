#include<stdio.h>
int main(){
    int code1,code2,num1,num2;
    float price1, price2,value;

    scanf("%d %d %f %d %d %f",&code1,&num1,&price1,&code2,&num2,&price2);

    value = (num1*price1)+(num2*price2);
    printf("VALOR A PAGAR: R$ %.2f",value);

    return 0;
}