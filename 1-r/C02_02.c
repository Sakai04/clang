#include <stdio.h>

void main(){
   int arr[10] = {3, 4};

   int tt = 0;

   for (int i = 0; i < 2; i++)
        printf("%d ", arr[i]);
    printf("\n");
    tt = arr[0];
    arr[0] = arr[1];
    arr[1] == tt;

    for (int i = 0; i < 2; i++)
        printf("%d ", arr[i]);
}