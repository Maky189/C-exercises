#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3 - i; j++)
        {
            printf(" ");
        }
        printf("/");

        for(int m = 0; m < 1 + i; m++)
        {
            printf(" ");
        }
        printf("|");
       
        printf("\n");
    }
    for(int m = 0; m < 3 * 2; m++)
    {
        printf("-");
    }
    printf("\n");
    return 0;
}