#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long n = get_long("Enter a number: ");
    int count = 0;

    if (n == 0) count = 1;

    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    printf("Total digits: %d\n", count);
}
