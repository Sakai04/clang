#include <stdio.h>

void main()
{
    int arr[10] = {6, 3};

    printf("before :");
    for (int i = 0; i < 2; i++)
        printf("%d ", arr[i]);

    printf("\n");

    ///// 코드 작성 ////////
    int tmp = arr[0];
    arr[0] = arr[1];
    arr[1] = tmp;
    ////////////////////////

    printf("after :");
    for (int i = 0; i < 2; i++)
        printf("%d ", arr[i]);
}