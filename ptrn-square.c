#include<stdio.h>
int main(){
    int row, col,size,space;
    scanf("%d",&size);

    for (row=1;row<=size;row++){
        for(col=1;col<=size;col++){
            if(row==size || row==1 || col==size || col ==1){
                printf("*");
            }else{
                printf(" ");}
        }printf("\n");
    }
    return 0;
}