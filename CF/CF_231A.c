#include<stdio.h>
int main(){
    int test,number_of_q=0;
    scanf("%d",&test);
    while(test--){
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if(a+b+c>=2){
            number_of_q++;
        }
        
    }printf("%d\n",number_of_q);

}
