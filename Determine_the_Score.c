#include <stdio.h>

int main() {
	int x,y,t;
    int a=0,b,c;

    scanf("%d",&t);
	while (t--)
    {
        scanf("%d%d",&x,&y);
        a=x/10;
        printf("%d\n",a*y);
    }
    
	return 0;
}
