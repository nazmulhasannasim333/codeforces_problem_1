#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int first_digit = n / 1000;
    if (first_digit % 2 == 0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }

    // int n;
    // scanf("%d", &n);
    // int last_digit = n % 100;
    // printf("%d\n", last_digit);
    // if (last_digit % 2 == 0)
    // {
    //     printf("EVEN");
    // }
    // else
    // {
    //     printf("ODD");
    // }
    return 0;
}