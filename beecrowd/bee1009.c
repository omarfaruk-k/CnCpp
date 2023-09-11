#include<stdio.h>
int main(){

    char name[20];
    double salary, sales, final_salary;

    scanf("%s %lf %lf",&name,&salary,&sales);

    final_salary = salary + (.15*sales);

    printf("TOTAL = R$ %.2lf\n",final_salary);

    return 0;

}