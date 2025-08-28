int main() {
    asm(".BYTE 0xFF, 0xFF");        // Inserting and attempting to execute nonsense instruction

    return 0;
}