#include<stdio.h>
int main(){
    int a,b,x,n;
    scanf("%d",&n);
    while(n--){
        scanf("%d%d%d",&a,&b,&x);
        printf("%d\n",(b-a)/x);
    }

}