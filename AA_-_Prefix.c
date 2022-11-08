#include <stdio.h>
#include<string.h>
int main()
{
    char t[101], s[101];
    int count=0;
    scanf("%s",&s);
    scanf("%s",&t);
    if ((int)strlen(s) > (int)strlen(t)){
        printf("No\n");
    }
    else
    {
        for (int i=0;i<strlen(s);++i)
        {
            if (s[i]!=t[i]){
                count++;
                }}
    if (count==0){
            printf("Yes\n");
        }
    else{
            printf("No\n");
        }
}
}