/*
 * Fibonacci numbers defined recursively
 */
#include "fib.h"

#include <assert.h> /* assert */
#include <stdio.h>  /* printf */

/* Fibonacci function definition */
int fib(int n, int p, int pp)
{
    {
        /* pre-condition */
        assert(n >= 1);
        /* post-condition */
        if (n == 1)
            return 1;
        else if (n == 2)
            return 1;
        else

            return fib(n - 1, p, pp) + fib(n - 2, );
    }

    return 0;
}
