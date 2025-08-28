#include <stdio.h>

int main() {
    int* p = malloc(4);
    free(p);
    free(p);

    return 0;
}