#include <stdio.h>

int main() {
	int a,b,t;
    scanf("%d",&t);
	while (t--)
    {
        scanf("%d%d",&a,&b);
        (a>b)?printf("A\n"):printf("B\n");
    }
    
	return 0;
}
