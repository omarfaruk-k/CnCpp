#include<stdio.h>
int main(){
    int count=0,t;
    scanf("%d",&t);
    int arr[t];
    for(int i=0;i<t;i++){
        scanf("%d",&arr[i]);
        }
    int big=arr[0],small=arr[0];
    for(int i=1;i<t;i++){
        if(big<arr[i])
        {
            count++;
            big=arr[i];
        }
        if (small>arr[i])
        {
            small=arr[i];
           count++;
        }
        
    }printf("%d",count);
}