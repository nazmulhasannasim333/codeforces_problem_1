#include <stdio.h>

int main()
{
    long long int n, m;
    scanf("%lld %lld", &n, &m);
    long long int sum = 0;
    long long a = n % 10;
    long long b = m % 10;
    sum = a + b;
    printf("%lld\n", sum);
    return 0;
}