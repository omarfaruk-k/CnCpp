#include<stdio.h>
int main(){
    float a,score,avg;
    int x,count=0;

    while(x!=2){
        while(count <2)
        {
            scanf("%f",&a);
            if (a>=0 && a<=10){
                score +=a;
                count++;
            }
            else{printf("nota invalida\n");} 
        }
        avg = score/2;

        printf("media = %.2f\n",avg);
        
        while(x!=1 || x!=2){
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d",&x);
        
            // if (x == 2){
            //     break;
            //     break;}
            // else{
                count=0;
                score=0;
            }
            
            
    }
    
}