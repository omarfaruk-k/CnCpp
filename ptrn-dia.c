#include<stdio.h>
int main(){
    int row, col,size,space;
    scanf("%d",&size);

    for(row=1;row<=size;row++){
        for(int space=1;space<=size-row;space++){
            printf(" ");}
        for(col=1;col<=2*row-1;col++){
            printf("*");
        }printf("\n");
    }
    for(row=size;row>=1;row--){
        for(int space=1;space<=size-row;space++){
            printf(" ");}
        for(col=1;col<=2*row-1;col++){
            printf("*");
        }printf("\n");
    }
    return 0;
}