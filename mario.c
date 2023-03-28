#include <cs50.h>
#include <stdbool.h>
#include <stdio.h>

int main(void)

{
    // Get the size of grid
    int n = get_size();

    // print grid of bricks
    print_grid(n);

}

int get_size(void)
{
    int n;
    do
    {
        n = get_size("Size: ")
    }
    while(n < 1);
    return n;
}

void print_grid(int size)
{
    
}