#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,d,average,average2,e;
    scanf("%f %f %f %f",&a,&b,&c,&d);
    average = ((a*2)+(b*3)+(c*4)+(d*1))/10;
    printf("Media: %.1f\n",average);

    if(average>=7.0){
        printf("Aluno aprovado.\n");
    }else if(average<5){
        printf("Aluno reprovado.\n");
    }else if(5<=average && average<7){
        printf("Aluno em exame.\n");
    

        scanf("%f",&e);
        printf("Nota do exame: %.1f\n",e);

        average2 = (average+e)/2;

        if (average2>=5){
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n",average2);
        }else{
            printf("Aluno reprovado.\n");
            printf("Media final: %.1f\n",average2);
        }
      
    }

}