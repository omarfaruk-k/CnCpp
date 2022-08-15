#include<stdio.h>
int main(){
    int number, work_in_H;
    float amount_per_H, salary;

    scanf("%d %d %f",&number,&work_in_H,&amount_per_H);

    salary = work_in_H * amount_per_H;

    printf("NUMBER = %d\nSALARY = U$ %.2f\n",number,salary);

    return 0;
}