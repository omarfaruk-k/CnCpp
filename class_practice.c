#include<stdio.h>
int main(){
   
    int choice,num1,num2,sum,sub,choice2;
    do{
        printf("What do you want?\n1.Summation\n2.Substraction\n3.YES/NO\n");
        scanf("%d",&choice);

        if (choice==1){
            printf("Enter two number to sum:\n");
            scanf("%d %d",&num1,&num2);

            sum = num1+num2;
            printf("The.....%d\n",sum);}

        else if (choice==2){
            printf("Enter two number to sub:\n");
            scanf("%d %d",&num1,&num2);

            sub = num1-num2;
            printf("The.....%d\n",sub);
             }
        else
            {
                printf("Type your choice:\n1 for Yes\n2 for No\n");
                scanf("%d",&choice2);

                if (choice2 == 2)
                    break;
            }


    }while(1);

    return 0;
}

