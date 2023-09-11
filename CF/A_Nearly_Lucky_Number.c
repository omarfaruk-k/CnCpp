#include<stdio.h>
int main(){
    long long int a;
    int count=0;
    scanf("%lld",&a);
    while(a!=0){
        if(a%10==7 || a%10==4){
            count++;
        }a=a/10;

    }if(count==7 || count==4){
        printf("YES");
    }else{
        printf("NO");
    }
}