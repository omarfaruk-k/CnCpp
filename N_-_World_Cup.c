#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    while(1){
        if(n%4==2){
            break;;
        }else{
            n++;
        }
    }printf("%d",n);
}