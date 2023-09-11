#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int sum1,sum2;
    char s1[101],s2[101];
    scanf("%s%s",s1,s2);
   
   for(int i=0;i<=strlen(s1);i++){
   s1[i] = tolower(s1[i]);
}   for(int i=0;i<=strlen(s2);i++){
   s2[i] = tolower(s2[i]);
}

    if (strcmp(s1,s2)==0){
            printf("0");
            }
    else{
    for(int i=0;i<=strlen(s1);i++){
        if(s1[i]<s2[i]){
            printf("-1");
            break;
        }
        else if(s1[i]>s2[i]){
            printf("1");
            break;
        }
    }}

}