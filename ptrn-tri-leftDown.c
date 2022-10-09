#include<stdio.h>
int main(){
    int row, col,size;
    scanf("%d",&size);
    for(row=1;row<=size;row++){
        for(col=size;col>=row;col--){
            printf("*");
        }printf("\n");
    } 
    return 0;
}