#include<stdio.h>
#include<string.h>
int main(){
    int n,count=0;
    char colour[50];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",colour);
        if(colour[i]==colour[i+1]){
            count++;
        }
    }printf("%d",count);

}
