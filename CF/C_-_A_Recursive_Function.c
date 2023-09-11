#include<stdio.h>
#include<math.h>
int fun1(int n);
int main(){
    int n,res;
    scanf("%d",&n);
    if(n==0){
        printf("1");
    }else{
        res=fun1(n);
        printf("%d",res);
    }
    return 0;
}
int fun1(int n){
    int k;
    if(n-1>0){
       return k=(n*(fun1(n-1)));
    }else if(n-1==0){
        return k=(n*1);
    }
    
}