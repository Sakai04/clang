#include <stdio.h>

int main(void){
    int a, b;
    int sum, diff;

    scanf ("%d %d", &a, &b);

    sum = a + b;
    diff = a -  b;

    printf("%d,%d", sum, diff);

    return 0;

}