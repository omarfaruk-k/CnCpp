#include<stdio.h>
#include<string.h>
int main(){
    char t[100],s[100];
    scanf("%s %s",s,t);

    if (strlen(t)<strlen(s)){
        printf("No");
    }else if(strlen(t)==strlen(s)){
        if(strcmp(s,t)==0){
            printf("Yes");
        }else{
            printf("No");
        }}
    else if(strlen(s)!=0 && strlen(t)==0){
        printf("Yes");
    }else if((strlen(s)==0 && strlen(t)!=0)){
        printf("No");
    }
    else{

        for(int i=0;i<strlen(s);i++){
            if(t[i]==s[i]){
                printf("Yes");
                break;
            }else{
                printf("No");
                break;
            }
        }
    }
}