#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        for( n = 'z'; n >= 'a'; n--)
        {
                putchar(n);
        }
        putchar('\n');
        return (0);
}