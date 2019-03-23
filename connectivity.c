/*
CONNECTIVITY QUCIK FIND ALGORITHM - Pairs of numbers represent network 
connections so finds the start and end point of connections.

Reads a sequence of pairs of nonnegative integers less than N from standard 
input (interpreting the pair p q to mean “connect object p to object q”) 
and prints out pairs representing objects that are not yet connected. 
It maintains an array id that has an entry for each object, with the property 
that id[p] and id[q] are equal if and only if p and q are connected.  
N is defined as a compile-time constant. 
*/
#include <stdio.h>
#define N 100
main()
{
    int i, p, q, t, id[N];
    for (i = 0; i < N; i++)
        id[i] = i;
    while (scanf("%d %d\n", &p, &q) == 2)
    {
        if (id[p] == id[q])
            continue;
        for (t = id[p], i = 0; i < N; i++)
            if (id[i] == t)
                id[i] = id[q];
        printf(" %d %d\n", p, q);
    }
}