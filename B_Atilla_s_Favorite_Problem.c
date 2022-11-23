#include<stdio.h>
#include<string.h>
int main(){
    int t,n,d=0;
    scanf("%d",&t);
    while(t--){
        
        scanf("%d",&n);
        char str[n],max=str[0];
        scanf("%s",str);
        for(int i=0;i<strlen(str);i++){
            if(max<str[i]){
                max=str[i];
            }
        d=max-96;
       
        }printf("%d\n",d);
        d=0;
    }
}