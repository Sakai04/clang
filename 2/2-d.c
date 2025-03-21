#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int arr[10];  // 크기가 10인 배열 선언
    int i;

    // 배열의 각 원소를 5에서 9 사이의 랜덤값으로 채움
    for(i = 0; i < 10; i++) {
        arr[i] = rand() % 5 + 5;  // (rand() % (9-5+1)) + 5 로 계산
    }

    // 배열의 내용을 출력
    for(i = 0; i < 10; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}