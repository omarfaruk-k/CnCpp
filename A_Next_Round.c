#include<stdio.h>
int main(){
    int k,n,arr[101],count=0;
    scanf("%d %d",&n,&k);
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<n;j++){
        if (arr[j]>=arr[k-1] && arr[j]>0)
            {
                count++;
            }
        else if(arr[j]<=0){
            continue;
        }
    }printf("%d",count);
    
}