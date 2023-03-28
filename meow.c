#include <cs50.h>
#include <stdbool.h>
#include <stdio.h>

int main(void)

{
    int n = get_int("Size: ");

    for (int i = 0; n; i++)
    {
        for (int j = 0; n; j++)
        {
            printf("#");
        }
        printf("\n");
    }


}