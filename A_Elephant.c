#include<stdio.h>
int main(){
    int dist,count,temp,sum=0;
    scanf("%d",&dist);
    if(dist==1||dist==2||dist==3||dist==4||dist==5){
        printf("1");
    }else{
        count=dist/5;
        sum+=count;
        temp=dist%5;
        count=temp/4;
        sum+=count;
        temp=temp%4;
        count=temp/3;
        sum+=count;
        temp=temp%3;
        count=temp/2;
        sum+=count;
        temp=temp%2;
        count=temp/1;
        sum+=count;
        temp=temp%1;
         printf("%d",sum);    
    }
}