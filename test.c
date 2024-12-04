#include <stdio.h>
#include <stdint.h>
#include <limits.h>

int main(void)
{
    /*
    void *test;
    */
    int test = -1;
    int *p = &test;

    //printf("%lu\n", (unsigned long)-2);
    unsigned long x = -2;
    printf("%lu", x);
    printf("%ld", LONG_MAX);
    return (0);
}