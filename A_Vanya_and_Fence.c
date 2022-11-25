#include<stdio.h>
int main(){
    int n,max_h,width=0,highet;
    scanf("%d%d",&n,&max_h);
    while (n--)
    {
        scanf("%d",&highet);
        if(highet<=max_h){
            width++;

        }else{
            width+=2;
        }
    }printf("%d",width);
    
}