#include <stdlib.h>
#include <settype.h>

numset setinit(int N)
{
    numset S = (numset)calloc(N + 1, sizeof(int));
    S[0] = N;
    return S;
}

numset setrand(int N)
{
    numset S = setinit(N);

    for (int i = 1; i <= N; i++)
        S[i] = rand() % 2;

    return S;
}

numset setrandsize(int N, int t)
{
    numset S = setinit(N);

    int ct = 0;
    while (ct <= t)
    {
        int elt = rand() % N + 1;
        if (S[elt] != 1)
        {
            S[elt] = 1;
            ct++;
        }
    }
}

numset setdestroy(numset S)
{
    free(S);
    return NULL;
}