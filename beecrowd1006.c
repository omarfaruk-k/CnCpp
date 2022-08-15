#include<stdio.h>
int main(){

    double A, B, D, average;

    scanf("%lf %lf %lf",&A,&B,&D);

    average = ((A*2)+(B*3)+(D*5)) /10;

    printf("MEDIA = %.1lf\n",average);


    return 0;


}