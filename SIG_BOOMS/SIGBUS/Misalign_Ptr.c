int main() {
    char buf[5];
    int* p = (int*)(buf + 1);   // Misalligned (only for arch where allignment is enforced)
    *p = 0x68616861;

    return 0;
}