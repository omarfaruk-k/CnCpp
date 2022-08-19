#include<stdio.h>
int main(){

    double input;
    scanf("%lf",&input);
    if(0>input || input>100){
        printf("Fora de intervalo");
        }
    else if(0<=input && input<=25){
        printf("Intervalo [0,25]");
        }
    else if(25<input && input<=50){
        printf("Intervalo (25,50]");
        }
    else if(50<input && input<=75){
        printf("Intervalo (50,75]");
    }
    else if(75<input && input<=100){
        printf("Intervalo (75,100]");
    }
}