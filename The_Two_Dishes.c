#include<stdio.h>
int main(){
    int a,b,n;
    scanf("%d",&n);
    while(n--){
        int diff=0;
        scanf("%d%d",&a,&b);
        for(int i=b;i>=0;i--){
            for(int j=a;j>=0;j--){
                if(i+j==b && j-i>diff){
                        diff=(j-i);
                }
            }
        }printf("%d\n",diff);

    }

}
                    