// #include<stdio.h>

// int main(){
//     int a;
//     long long int b;
//     char c;
//     float d;
//     double e;
//     scanf("%d %lld %c %f %lf", &a, &b, &c, &d, &e);
//     printf("%d\n%lld\n%c\n%.2f\n%.1lf", a, b, c, d, e);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int a;
//     long long int b;
//     char c;
//     float d;
//     double e;

//     scanf("%d %lld %c %f %lf", &a, &b, &c, &d, &e);

//     printf("%d\n%lld\n%c\n%.2f\n%.1lf\n", a, b, c, d, e);

//     return 0;
// }

#include <stdio.h>

int main()
{
    int intValue;
    long long longLongValue;
    char charValue;
    float floatValue;
    double doubleValue;

    scanf("%d %lld %c %f %lf", &intValue, &longLongValue, &charValue, &floatValue, &doubleValue);

    printf("%d\n", intValue);
    printf("%lld\n", longLongValue);
    printf("%c\n", charValue);
    printf("%.2f\n", floatValue);

    if (doubleValue == 0.0)
    {
        doubleValue = 0.0;
    }
    printf("%.1lf\n", doubleValue);

    return 0;
}