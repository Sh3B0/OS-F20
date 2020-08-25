#include <stdio.h>

void swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

int main()
{
    int a, b;
    if(scanf("%d %d", &a, &b) == 2)
    {
        swap(&a, &b);
        printf("%d %d", a, b);
    }
    else
    {
        printf("An error occurred");
    }
    printf("\n");
}

