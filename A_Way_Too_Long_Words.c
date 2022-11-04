#include<stdio.h>
#include<string.h>
int main(){
    int n;
    char wrd[100];
    scanf("%d",&n);
    while (n--)
    {
        scanf("%s",wrd);
        if(strlen(wrd)<=10){
            printf("%s\n",wrd);
        }else if(strlen(wrd)>10){
            int num=strlen(wrd)-2;
            printf("%c%d%c\n",wrd[0],num,wrd[strlen(wrd)-1]);
        }
    }

    return 0;
    
}