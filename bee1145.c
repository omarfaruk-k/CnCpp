#include<stdio.h>
int main(){
    int element_no, last_num,x,y,i=1,j;
    scanf("%d%d",&x,&y);

    element_no = (x<y)?x:y;
    last_num = (x>y)?x:y;

    while(i<=last_num){
        for(j=1;j<=element_no;j++){
            printf("%d",i);
            i++;
        }printf("\n");
        
    }
    return 0;
}