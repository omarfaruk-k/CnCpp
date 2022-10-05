#include<stdio.h>
int main(){
    int test,Hz;
    scanf("%d",&test);
    while(test--){
        scanf("%d",&Hz);
        if (67<= Hz && 45000>=Hz){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}