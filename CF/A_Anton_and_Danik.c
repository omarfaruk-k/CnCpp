#include<stdio.h>
int main(){
    int n,countA=0,countD=0;
    scanf("%d",&n);
    char game[n+1];
    scanf("%s",&game);
    for(int i=0;i<n;i++){
        if(game[i]=='A'){
            countA++;
        }else if(game[i]=='D'){
            countD++;
        }
    }if(countA>countD){
        printf("Anton");
    }else if(countA<countD){
        printf("Danik");
    }else if(countA==countD){
        printf("Friendship");
    }
    
}