#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main()
{
    srand(time(NULL));

    int arrEven[10];
    int arrEven_cnt = 0; // arr size

    int arrOdd[10];
    int arrOdd_cnt = 0;

    int ttt;
    for (int i = 0; i < 10; i++)
    {
        ttt = rand() % 10;
        printf("%d ", ttt);
        if (ttt % 2 == 0) // double
        {
            arrEven[arrEven_cnt] = ttt;
            arrEven_cnt += 1;
        }
        else
        {
            arrOdd[arrOdd_cnt] = ttt;
            arrOdd_cnt += 1;
        }
    }
    printf("\n");
    printf("arrEven : ");
    for (int i = 0; i < arrEven_cnt; i++)
        printf("%d ", arrEven[i]);

    printf("\n");
    printf("arrOdd : ");
    for (int i = 0; i < arrOdd_cnt; i++)
        printf("%d ", arrOdd[i]);
        
    }
