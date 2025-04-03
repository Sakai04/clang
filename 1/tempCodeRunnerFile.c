#include <stdio.h>

int main(){
    char j[12] = "Hello World";
    for (int i = 0; i < 5; i++){
        printf("%s\n", j);
        if (i == 2){
            break;
        }
    }

    return 0;
}