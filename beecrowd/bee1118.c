#include<stdio.h>
int main(){
    float a,score,avg;
    int x,count=0;

   loop: while(1){
        while(1)
        {
            scanf("%f",&a);
            if (a>=0 && a<=10){
                score +=a;
                count++;
            }
            else{printf("nota invalida\n");} 
            if (count ==2)
                break;
        }
        avg = score/2;

        printf("media = %.2f\n",avg);

        count=0;
        score=0;
        

        while(1){
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d",&x);
        
            if (x==2 || x==1)
                break;
            }
        if (x==2)break;
        else if (x==1){
            goto loop;
        }
            
    }
    return 0;
    
}

