#include<stdio.h>
#include<string.h>
int main(){
    char inp[10],temp;
    scanf("%s",&inp);
    for(int i=0;i<strlen(inp);i++){
        for(int j=0;j<strlen(inp);j++){
            if(inp[i]<inp[j]){
                temp=inp[i];
                inp[i]=inp[j];
                inp[j]=temp;
                

            }
        }
    }
    
        printf("%s",inp);

}