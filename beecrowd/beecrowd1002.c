# include <stdio.h>
int main ()
{
    double R, area;
    double n = 3.14159;
    scanf("%lf", &R);

    area = (R * R * n);

    printf("A=%.4lf\n", area);

    return 0;

}