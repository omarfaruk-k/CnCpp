#include<stdio.h>
 int main(){
    int num[6] ={10,8,6,4,2,0};
      int *p,i;
      p=&num[5];

    printf("\nElements of array in reverse order :");
    for(i = 0; i < 6; i++)
        printf("%d\n", *(p--));
        
     return 0;
}