#include <stdio.h>
#define PI 3.141592

int main(void){
    int r, h;
    double area;

    scanf ("%d %d", &r, &h);
    area = 2 * PI * r * (r + h);

    printf("%.2f", area);

    return 0;
}