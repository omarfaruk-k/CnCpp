#include <stdio.h>
int main()
{
    int n,n1,n2,n3,n4,m;
    scanf("%d", n);
    while (1)
    {   n=n+1;
        n1=n/100;
        n2=(n/100)%10;
        n3=(n/10)%10;
        n4=n%10;

        if (n1!=n2 && n1!=n3 && n1!=n4 && n2!=n3 &&n2!=n4 && n3!=n4);
        {
            break;
        }
    }printf("%d",n);
}