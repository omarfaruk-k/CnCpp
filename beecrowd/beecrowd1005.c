#include<stdio.h>
int main(){

    float A, B, average;

    scanf("%f %f",&A,&B);

    average = ((A*3.5)+(B*7.5)) /(3.5+7.5);

    printf("MEDIA = %.5f\n",average);


    return 0;


}