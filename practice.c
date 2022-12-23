#include<stdio.h>
int main(){
    int choice=0,arr[1000],i=0,n=1;

    while(1)
    {
        printf("1. Insert\n2.Delete\n3.Disply\n4.Exit\n\n");
        scanf("%d",&choice);
        if (choice==1){
            scanf("%d",&arr[i]);
        }
        else if (choice==2)
        {
            arr[i]=NULL;
        }
        else if(choice==3){
            for(int j=0;j<i;j++){
                printf(" %d",arr[j]);
            }
        }else if(choice==4){
            break;
        }
        i++;
    }
    
}