#include <soln1.h>

int findterm1(int n, recrel1 rec)
{
    if (n == 0)
        return rec.a0;

    return rec.c1 * findterm1(n - 1, rec) + rec.d;
}