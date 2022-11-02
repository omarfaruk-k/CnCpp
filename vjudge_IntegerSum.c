#include<stdio.h>
int main(){
    int n,sum=0,a;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&a);
        sum+=a;
    }printf("%d",sum);
}