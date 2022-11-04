#include<stdio.h>
// int func(int n1,int n2);

int main(){
    int a,b,c,d,sum;
    scanf("%d%d",&a,&b);
sum=a+b;
if (sum==0){
    printf("0");
}
else if(sum%2!=0){
    printf("%d",sum);
}else{
    printf("%d",sum-1);
}}
//     c = func(a,b);
//     printf("%d",c);

// }
// int func(int n1,int n2){
//     int x=0,y=0,z=0;
//     if (n1==0 && n2==0){
//         return 0;
//     }else{
//         x=n1%4;
//         y=n2%4;
//         if(x<=3 || y<=3){
//             z+=4;
//         }x=x%2;
//          y=y%2;
//         if(x<=1||y<=1){
//             z+=2;
//         }x=x%1;
//          y=y%1;
//         if(x==0||y==0){
//             z+=1;
//         }
//     }
//     return z;
// }
