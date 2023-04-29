#include <stdio.h>

int main() {
    int i, j;
    for (i = 5; i >= 1; i--) {
        for (j = 5; j >= 1; j--) {
            printf("%dx%d=%d\n", i, j, i*j);
        }
        printf("\n");
    }
    return 0;
}
