#include<stdio.h>
int main(){
    int row, col,size,space;
    scanf("%d",&size);
    for(row=size;row>=1;row--){
        for(space=1;space<=size-row;space++){
            printf(" ");}
        for(col=1;col<=row;col++){
            printf("%d",space);
        }printf("\n");
    } 
    return 0;
}