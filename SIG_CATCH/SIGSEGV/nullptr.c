#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <pthread.h>

void int_to_str(unsigned int n, char *buf, size_t *len) {
    char *p = buf;
    char tmp[20];
    size_t i = 0;

    if (n == 0) tmp[i++] = '0';
    while (n) { tmp[i++] = '0' + (n % 10); n /= 10; }
    while (i--) *p++ = tmp[i];
    *p = '\0';
    *len = p - buf;
}

void handle(int sig) {
    const char msg[] = "I'm doomed, the OS will kill me - remember me... PID: ";
    char pid[20];
    size_t pidLen;
    int_to_str(getpid(), pid, &pidLen);

    write(2, msg, sizeof(msg) - 1);
    write(2, pid, pidLen);
    write(2, "\n", 2);
    
    _exit(1);
}

int main() {
    signal(SIGSEGV, handle);

    int* p = 0;
    *p = 0x68616861;

    return 0;
}