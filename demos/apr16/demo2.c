#include "header.h"
int main(int argc, char *argv[]) {
    int val;
    if (argc != 2)
        exit(0);
    if ((val = fcntl(atoi(argv[1]), F_GETFL, 0)) < 0)
        err_sys("fcntl error for fd");
    switch (val & O_ACCMODE) {
    case O_RDONLY:
        printf("read only");
        break;
    case O_WRONLY:
        printf("write only");
        break;
    case O_RDWR:
        printf("read write");
        break;
    default:
        err_sys("unknown access mode");
    }

    if (val & O_APPEND)
        printf(", append");
    putchar('\n');
    exit(0);
}
