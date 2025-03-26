#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    int arr[10] = {1, 2, 3, 4, 5};

    printf("%d  \n", sizeof(arr));               // 물리적메모리크기
    printf("%d  \n", sizeof(arr) / sizeof(int)); // 저장공간갯수
    int arr_cnt = 5;                             // 배열의 사용크기를 알려주어야 한다.

    printf("초기값 :");

    for (int i = 0; i < arr_cnt; i++)
        printf("%d ", arr[i]);
    printf("\n");

    ///// 코드 작성 ////////
    int temp = arr[0];
    for (int i = 0; i < arr_cnt - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[arr_cnt - 1] = temp;
    ////////////////////////

    printf("left shift :");
    for (int i = 0; i < arr_cnt; i++)
        printf("%d ", arr[i]);
    printf("\n");

    ///// 코드 작성 ////////
    int temp = arr[arr_cnt - 1];
    for (int i = arr_cnt - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
    ////////////////////////

    printf("right shift :");
    for (int i = 0; i < arr_cnt; i++)
        printf("%d ", arr[i]);
    printf("\n");

    for (int i = arr_cnt - 1; i > 0; i--)
    {
        int tmp;
        tmp = arr[i];
        arr[i] = arr[i - 1];
        arr[i - 1] = tmp;
    }

    printf("right shift :");
    for (int i = 0; i < arr_cnt; i++)
        printf("%d ", arr[i]);
    printf("\n");
}