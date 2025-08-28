#include <stdio.h>

int main() {
    int* p = malloc(4);
    free(p);
    free(p);            // Freeing already freed data

    return 0;
}