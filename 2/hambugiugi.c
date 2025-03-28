#include <stdio.h>
#include <string.h>

int main(void) {
    char d[10];
    printf("are you sure? :");
    scanf("%9s", d);
    if (strcmp(d, "yes") == 0) {
        printf("Deus Vult\n");
    } else {
        printf("Operation aborted.\n");
    }
    return 0;
}