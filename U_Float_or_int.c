#include <stdio.h>
#include <math.h>

// some issues with the code, but it is not clear what the issues are
// code work in VS code, but not in the online judge

int main()
{
    double N;
    scanf("%lf", &N);

    int integerPart = (int)N;
    double decimalPart = N - integerPart;

    if (fabs(decimalPart) < 1e-9)
    {
        printf("int %d\n", integerPart);
    }
    else
    {
        printf("float %d %.3lf\n", integerPart, decimalPart);
    }

    return 0;
}