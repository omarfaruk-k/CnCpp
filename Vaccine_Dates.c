#include<stdio.h>
int main(){
    int d,l,r,n;
    scanf("%d",&n);
    while(n--){
        scanf("%d%d%d",&d,&l,&r);
        (l<=d && d<=r)?(printf("Take second dose now\n")):(l>d?printf("Too Early\n"):printf("Too Late\n"));
    }

}