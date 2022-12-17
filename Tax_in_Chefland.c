#include<stdio.h>
int main(){
    int x,t;
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d",&x);
        if(x>100){
            x=x-10;
        }printf("%d\n",x);
    }
    
}