#include<stdio.h>
int main(){
    int size,row,col,n;
    scanf("%d",&size);
    for(row=1;row<=size;row++){
        n=1;
        for(col=1;col<=size-row;col++){
        printf(" ");}
        for(col=1;col<=row;col++){
        printf(" %d",n);
        n = n*(row-col)/col+1;
        }
    printf("\n");
    }
}