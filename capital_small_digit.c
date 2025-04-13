#include <stdio.h>

int main()
{
    char ch;
    scanf("%c", &ch);
    // if(ch >= 'a' && ch <= 'z'){
    //     printf("ALPHA\n");
    //     printf("IS SMALL\n");
    // }else if(ch >= 'A' && ch <= 'Z'){
    //     printf("ALPHA\n");
    //     printf("IS CAPITAL\n");
    // }else if(ch >= '0' && ch <= '9'){
    //     printf("IS DIGIT\n");
    // }

    // Another one
    if (ch >= '0' && ch <= '9')
    {
        printf("IS DIGIT\n");
    }
    else
    {
        printf("ALPHA\n");
        if (ch >= 'a' && ch <= 'z')
        {
            printf("IS SMALL\n");
        }
        else
        {
            printf("IS CAPITAL\n");
        }
    }
    return 0;
}