#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <settype.h>
#include <setops.h>

int howmanypackets(int N)
{
    int packets = 0;
    numset S = setinit(N);

    while (setsize(S) < N)
    {
        int elt = rand() % N + 1;
        S = setaddelt(S, elt);
#ifndef STAT_MODE
        printf("Packet %d has coupon %d, Available coupons: ", packets + 1, elt);
        setprint(S);
        printf("\n");
#endif
        packets++;
    }

    S = setdestroy(S);
    return packets;
}

int main()
{
    srand((unsigned int)time(NULL));

    int N;
    printf("\nNumber of coupons (N): ");
    scanf("%d", &N);
#ifdef STAT_MODE
    printf("+++ Statistics Mode\n");
    double total = 0;
    for (int i = 0; i < 1000; i++)
        total += howmanypackets(N);

    printf("--- Average number of packets to buy = %lf\n", total / 1000);
#else
    printf("+++ Interactive Mode\n");
    printf("--- %d packets were bought\n", howmanypackets(N));
#endif

    return 0;
}