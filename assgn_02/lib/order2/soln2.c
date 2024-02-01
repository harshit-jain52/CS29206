#include <soln2.h>

int findterm2(int n, recrel2 rec)
{
    if (n == 0)
        return rec.a0;
    if (n == 1)
        return rec.a1;

    return rec.c1 * findterm2(n - 1, rec) + rec.c2 * findterm2(n - 2, rec) + rec.d;
}