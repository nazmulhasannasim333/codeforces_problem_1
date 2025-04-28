#include <stdio.h>
#include <math.h>

int main()
{
    long long A, B, C, D;

    scanf("%lld %lld %lld %lld", &A, &B, &C, &D);

    if (A == C)
    {
        printf("NO\n");
        return 0;
    }

    if (B == D)
    {
        if (A > C)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        return 0;
    }

    double log_AB = B * log(A);
    double log_CD = D * log(C);

    if (log_AB > log_CD)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}