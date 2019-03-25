/* Euclids algorithm to find the greatest common divosor of two integers */

#include <stdio.h>

unsigned int gcd(unsigned int m, unsigned int n)
{
    if (!m || !n)
        return (0);
    for (unsigned int r = m % n; r; m = n, n = r, r = m % n)
        ;
    return (n);
}

int m, n;

int main()
{
    printf("Greatest Common Divisor\n");
    printf("Enter first integer m:");
    scanf("%i", &m);
    printf("Enter second integer n:");
    scanf("%i", &n);
    printf("GCD: %i\n", gcd(m, n));
    return (0);
}