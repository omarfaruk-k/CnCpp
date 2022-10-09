#include<stdio.h>
int main(){
1
12
123
    int row, col,size;
    scanf("%d",&size);
    for(row=1;row<=size;row++){
        for(col=1;col<=row;col++){
            printf("%d",col);
        }printf("\n");
    }   
    return 0;
}
*
**
***
void tri_star(){
    int row, col,size;
    scanf("%d",&size);
    for(row=1;row<=size;row++){
        for(col=1;col<=row;col++){
            printf("*");
        }printf("\n");
    } 
}
A
AB
ABC
void tri_ABC(){
    int row, col,size;
    scanf("%d",&size);
    for(row=1;row<=size;row++){
        for(col=1;col<=row;col++){
            printf("%c",64+col);
        }printf("\n");
    }
A
BB
CCC
void tri_ABC(){
    int row, col,size;
    scanf("%d",&size);
    for(row=1;row<=size;row++){
        for(col=1;col<=row;col++){
            printf("%c",64+row);
        }printf("\n");
    }
1
10
101
int main(){
    int row, col,size;
    scanf("%d",&size);
    for(row=1;row<=size;row++){
        for(col=1;col<=row;col++){
            printf("%d",col%2);
        }printf("\n");
    }
1
00
111
int main(){
    int row, col,size;
    scanf("%d",&size);
    for(row=1;row<=size;row++){
        for(col=1;col<=row;col++){
            printf("%d",row%2);
        }printf("\n");
    }
1
22
333
int main(){
    int row, col,size;
    scanf("%d",&size);
    for(row=1;row<=size;row++){
        for(col=1;col<=row;col++){
            printf("%d",ro);
        }printf("\n");
    } 

    return 0;
}