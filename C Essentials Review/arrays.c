#include <stdio.h>

int main() {
    int a[6] = {12,23,100};
    for (int i = 0; i < 6; i++) {
        printf("index %d: %d\n", i, a[i]);
    }
    printf("size of one array index: %ld", sizeof(a[1]));
    return 0;
}