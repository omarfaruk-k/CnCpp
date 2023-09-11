#include<stdio.h>
int main(){
    int rate,has,banana,cost=0;
    scanf("%d%d%d",&rate,&has,&banana);
    for(int i=1;i<=banana;i++){
        cost=cost+(i*rate);
    }
    if(cost<=has){
        printf("0");
    }else{
        printf("%d",cost-has);
    }
}