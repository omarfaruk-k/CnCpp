#include <stdio.h>
int main()
{
    int t, arr[101], count = 0;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < t; i++)
    {
        if (arr[i] == 1)
        {
            count++;
            break;
        }
    }
    if (count == 0)
    {
        printf("EASY");
    }
    else
    {
        printf("HARD");
    }
}