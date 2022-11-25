#include<stdio.h>
#include<string.h>
int main(){
    int count=0;
    char s[101],t[101];
    scanf("%s%s",&s,&t);
    for(int i=0,j=strlen(t)-1;i<strlen(s);i++,j--){
        if(s[i]!=t[j]){
                count++;
                break;
            }
       
    }if(count!=0){
        printf("NO");
    }else
    printf("YES");

}