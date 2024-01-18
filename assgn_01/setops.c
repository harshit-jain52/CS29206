#include <stdio.h>
#include <setops.h>

void setprint(numset S)
{
    printf("{ ");
    int N = S[0];

    for (int elt = 1; elt <= N; elt++)
    {
        if (S[elt])
            printf("%d ", elt);
    }

    printf("}");
}

int setsize(numset S)
{
    int N = S[0];
    int sz = 0;
    for (int elt = 1; elt <= N; elt++)
        sz += S[elt];

    return sz;
}

numset setaddelt(numset S, int i)
{
    S[i] = 1;
    return S;
}

numset setdelelt(numset S, int i)
{
    S[i] = 0;
    return S;
}

numset setunion(numset A, numset B)
{
    int N = A[0];
    numset S = setinit(N);
    for (int elt = 1; elt <= N; elt++)
        S[elt] = (A[elt] | B[elt]);

    return S;
}

numset setintersection(numset A, numset B)
{
    int N = A[0];
    numset S = setinit(N);
    for (int elt = 1; elt <= N; elt++)
        S[elt] = (A[elt] & B[elt]);

    return S;
}
