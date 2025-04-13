#include<stdio.h>

int main(){
    int A,B,C,D;
    scanf("%d %d %d %d",&A,&B,&C,&D);
    int difference = (A * B) - (C * D);
    printf("Difference = %d\n",difference);

    return 0;
}