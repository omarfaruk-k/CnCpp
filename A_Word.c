#include<stdio.h>
#include<string.h>
int main(){
    char s[101];
    int capi=0,small=0,i=0;
    scanf("%s",&s);
    while(s[i]!='\0'){
        if(65<=s[i] && 90>=s[i]){
            capi++;
        }else if(97<=s[i] && 122>=s[i]){
            small++;
        }
        i++;
    }if (capi>small){
        strupr(s);
        printf("%s",s);
    }else if(capi<=small){
        strlwr(s);
        printf("%s",s);
    }
}