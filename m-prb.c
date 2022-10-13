#include<stdio.h>
int main(){
    int num,j=1;
    printf("Where from do you want to start?\n");
    scanf("%d",&num);
    while(num){
        for(int i=1;i<=4;i++){
            printf("%d",num);
            if (i<4){
                printf(" ");
            }
            num--;
            }
        printf("\n");
        
    } 
    return 0;
}