int main() {
    int* p = malloc(4);
    free(p);
    free(p);
}