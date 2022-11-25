#include<stdio.h>
#include<string.h>
int main(){
    char name[101];
    int count=0,n;
    scanf("%s",name);
    for(int i=0;i<strlen(name);i++){
        for(int j=i-1;j>=0;j--){
            if (name[i]==name[j]){
                count++;
                break;
            }
        }
    }n=strlen(name)-count;
    if(n%2==0){printf("CHAT WITH HER!");}
    else{printf("IGNORE HIM!");}
    }