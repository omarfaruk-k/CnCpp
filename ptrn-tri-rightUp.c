#include<stdio.h>
int main(){
    int row, col,size;
    scanf("%d",&size);
    for(row=1;row<=size;row++){
        for(int space=1;space<=size-row;space++){
            printf(" ");}
        for(col=1;col<=row;col++){
            printf("%d",row);
        }printf("\n");
    } 
    return 0;
}