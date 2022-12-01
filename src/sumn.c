#include "sumn.h"

#include <stdio.h>
#include <assert.h>

int sumn(int n)
{
    // Pre-condition
    assert(n > 0);

    // Post-condtion
    if (n > 1)
        return (2 * n - 1) + sumn(n - 1);
    else
        return 1;
}