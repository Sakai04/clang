#include <stdio.h>

int mysum(int n){
    if (n==1) return 1;
    return n + mysum(n-1);
}

void main(){
    int n = 10;
    int sum = 0;

    printf("sum : %d\n", mysum(n));
}