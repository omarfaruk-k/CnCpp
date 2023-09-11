#include<stdio.h>
int main(){
    int t,a,b,count=0;
    scanf("%d",&t);
    while (t--)
    {
        count=0;
        scanf("%d%d",&a,&b);
        
            if (a%b==0)
            {
                printf("%d\n",count);
            }
            else{
                printf("%d\n",(b-a%b));
            }
    }
}