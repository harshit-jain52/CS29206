#include <soln3.h>

int findterm3(int n, recrel3 rec)
{
    if (n == 0)
        return rec.a0;
    if (n == 1)
        return rec.a1;
    if (n == 2)
        return rec.a2;

    return rec.c1 * findterm3(n - 1, rec) + rec.c2 * findterm3(n - 2, rec) + rec.c3 * findterm3(n - 3, rec) + rec.d;
}