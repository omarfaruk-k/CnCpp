#include<stdio.h>
int main(){
    int t;
    int arr[t],count=0;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d",&arr[i]);
    }for(int i=0;i=t;i++){
        if(arr[i]!=arr[i+1]){
            count++;
        }
    }printf("%d",count);
    
}