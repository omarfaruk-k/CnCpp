#include<stdio.h>
int main(){
    int a[100],i,big,count,n;
    scanf("%d",&n);

    for(i = 0; i< n; i++)
    {
        scanf("%d",&a[i]);

        if(i==0 || big<a[i])
        {
            count=i+1;
            big=a[i];
        }
    }

    printf("%d\n",count);

    return 0;
}