#include<stdio.h>
int main(){
    int a,b,x,y;
    scanf("%d %d",&a,&b);

    x = (a<b)?a:b;
    y = (a>b)?a:b;

    for(x+1;x<y;x++){
        if(x%5==2 || x%5==3){
            printf("%d\n",x);
        }
    }
    return 0;
}