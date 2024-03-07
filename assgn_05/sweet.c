#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

typedef struct
{
    int N;
    int *A;
    int num;
} coupons;
coupons initempty(int);
void destroycoupons(coupons *);
coupons addcoupon(coupons, int);
int allcoupons(coupons);

coupons initempty(int N)
{
    coupons S;

    S.N = N;
    S.A = (int *)calloc(N, sizeof(int));
    S.num = 0;
    return S;
}

coupons addcoupon(coupons S, int c)
{
    if (!S.A[c])
    {
        S.A[c] = 1;
        ++S.num;
    }
    return S;
}

int allcoupons(coupons S)
{
    return (S.N == S.num) ? 1 : 0;
}

void destroycoupons(coupons *S)
{
    free(S->A);
}

#include "choco.c"
