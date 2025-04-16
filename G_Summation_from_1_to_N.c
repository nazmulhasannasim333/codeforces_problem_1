#include <stdio.h>

int main()
{
    long long int n;
    scanf("%lld", &n);
    long long int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("%lld\n", sum);
    return 0;
}

// #include <stdio.h>

// int main()
// {
//     long long int n; // Use long long int to handle large numbers
//     scanf("%lld", &n);

//     // Calculate the sum using the formula
//     long long int sum = (n * (n + 1)) / 2;

//     // Print the result
//     printf("%lld\n", sum);

//     return 0;
// }