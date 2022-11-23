#include<stdio.h>
int main(){
    int t,in,Out,sum=0,big=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&Out,&in);
        sum=sum-Out;
        sum=sum+in;
        if(big<sum){
            big=sum;
        }
    }printf("%d",big);
}