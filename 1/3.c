#include <stdio.h>

int main(){
    char j[12] = "Hello World";
    int i = 4;
    while (i--){
        printf("%s\n", j);
    }

    return 0;
}