
#include <stdio.h>

int main(void) {
    int n, sum = 0;
    
    for(int i = 0; ;i++){
        scanf("%d", &n);
        if (n == 0){
            break;
        }
        if (n % 2 != 0){
            continue;
        }
        sum += n;
    }
    printf("%d", sum);

    return 0;
}