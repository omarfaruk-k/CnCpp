#include<stdio.h>
int main(){
    int n[5],count=0;
    for(int l=0;l<5;l++){
    scanf("%d",&n[l]);}

    for(int i=0;i<5;i++){
        
        for(int j=i+1;j<5;j++){

            if(n[i]==n[j]){
                count++;
                break;
            }
        }
    }printf("%d",5-count);

}