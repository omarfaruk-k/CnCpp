#include<stdio.h>
int main(){
    int a,b,count=0;
    scanf("%d%d",&a,&b);
    while(1){
        if(a>b){
            break;
        }a=a*3;
        b=b*2;
        count++;
    }printf("%d",count);
}