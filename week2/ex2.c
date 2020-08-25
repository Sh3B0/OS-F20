#include <stdio.h>
#include <string.h>

#define MAX 256

int main()
{
    char s[MAX];
    if(fgets(s, sizeof(s), stdin) != NULL)
    {
        for(int i=strlen(s)-2; i>=0; i--)
        {
            printf("%c", s[i]);
        }
    }
    else{
    	printf("An error occurred");
    }
    printf("\n");
}

