#include<stdio.h>
int main(){
    int room,people,size,count=0;
    scanf("%d",&room);
    while(room--){
        scanf("%d%d",&people,&size);
        if(size-people>=2){
            count++;
        }

    }printf("%d",count);
}