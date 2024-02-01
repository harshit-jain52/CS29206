#include <stdio.h>
#include <order1/soln1.h>
#include <order2/soln2.h>
#include <order3/soln3.h>

int main()
{
    int n;
    printf("n = ");
    scanf("%d", &n);

    // Tower Of Hanoi
    recrel1 toh = {1, 2, 0};
    printf("ToH(%d) = %d\n", n, findterm1(n, toh));

    // Fibonacci Numbers + 5
    recrel2 fib5 = {-5, 1, 1, 5, 6};
    printf("Fib(%d) + 5 = %d\n", n, findterm2(n, fib5));

    // Fibonacci Numbers
    recrel3 fib = {0, 0, 2, 1, 0, 1, 1};
    printf("Fib(%d) = %d\n", n, findterm3(n, fib));
}