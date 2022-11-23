#include<stdio.h>
#include<string.h>
int main(){
    char name[101];
    int count=0,n;
    scanf("%s",name);
    for(int i=0;i<strlen(name);i++){
        for(int j=0;j<strlen(name);j++){
            if (name[i]==name[j] && i!=j){
                name[j]='0';
                count++;
            }
        }
    }n=strlen(name)-count;
    (n%2==0)?(printf("CHAT WITH HER!")):(printf("IGNORE HIM!"));
    }