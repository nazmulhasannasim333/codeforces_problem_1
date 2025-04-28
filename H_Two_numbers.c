#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int floor_result = a / b;
    int ceil_result = (a + b - 1) / b;
    int round_result = (a + b / 2) / b;

    printf("floor %d / %d = %d\n", a, b, floor_result);
    printf("ceil %d / %d = %d\n", a, b, ceil_result);
    printf("round %d / %d = %d\n", a, b, round_result);

    return 0;
}