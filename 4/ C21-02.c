#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int A[10], B[10]; // 각각 짝수와 홀수를 저장할 배열
    int a_count = 0, b_count = 0;
    int num, i;

    // 난수 생성을 위한 시드 초기화
    srand(time(NULL));

    printf("생성된 숫자들: ");
    for (i = 0; i < 10; i++)
    {
        num = rand() % 10; // 0부터 9 사이의 임의의 값 생성
        printf("%d ", num);

        if (num % 2 == 0)
        {
            A[a_count++] = num; // 짝수인 경우 A 배열에 저장
        }
        else
        {
            B[b_count++] = num; // 홀수인 경우 B 배열에 저장
        }
    }
    printf("\n");

    // 짝수 배열 출력
    printf("짝수 배열 (A): ");
    for (i = 0; i < a_count; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");

    // 홀수 배열 출력
    printf("홀수 배열 (B): ");
    for (i = 0; i < b_count; i++)
    {
        printf("%d ", B[i]);
    }
    printf("\n");

    return 0;
}