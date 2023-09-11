#include<stdio.h>
int main(){
    int digit;
    int num1=0,num2=1,sum;
    scanf("%d",&digit);
    digit -= 2;
    printf("%d %d",num1,num2);
    while(digit--){
        sum = num1+num2;

        
        // if(digit>=0){
        //     printf(" ");
        // }
        printf(" %d",sum);
        num1 = num2;
        num2 = sum;   

    }
    return 0;
}