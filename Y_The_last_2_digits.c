#include <stdio.h>

int main()
{
    int A, B, C, D;
    scanf("%d %d %d %d", &A, &B, &C, &D);
    int modA = A % 100;
    int modB = B % 100;
    int modC = C % 100;
    int modD = D % 100;

    int last_two_digits = (((modA * modB) % 100) * modC % 100) * modD % 100;
    printf("%02d\n", last_two_digits);

    return 0;
}