#include<stdio.h>
int main(){
    int n,x=1,i=1;

    scanf("%d",&n);
    while (i<=n)
    {
        printf("%d %d %d PUM\n",x,x+1,x+2);
        i++;
        x += 4;
    }
    

}