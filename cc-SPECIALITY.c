#include<stdio.h>
int main(){
    int test,s,t,e;
    scanf("%d",&test);
    while(test--){
        scanf("%d %d %d",&s,&t,&e);
        if (s>t && s>e){
            printf("Setter\n");
        }else if (t>s && t>e){
            printf("Tester\n");
        }else if (e>t && e>s){
            printf("Editorialist\n");
        }
       
    }
    return 0;
}