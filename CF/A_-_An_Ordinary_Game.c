#include<string.h>
#include<stdio.h>
int main(){
    char s[1000000];
    int count=0;
    scanf("%s",s);
    int n=strlen(s);
    for(int i=1;i<=n-1;i++){
        if(s[i]!=s[i+1] && s[0]!=s[n-1]){
            //s[i]='\0';
            count++;
        }

    }if(count%2==0||count==0){
        printf("Second");
    }else{
        printf("First");
    }
}