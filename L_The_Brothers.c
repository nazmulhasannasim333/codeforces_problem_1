#include <stdio.h>
#include <string.h>

int main()
{
    char f1[100], s1[100];
    scanf("%s %s", f1, s1);
    char f2[100], s2[100];
    scanf("%s %s", f2, s2);
    if (strcmp(s1, s2) == 0)
    {
        printf("ARE Brothers");
    }
    else
    {
        printf("NOT");
    }

    return 0;
}