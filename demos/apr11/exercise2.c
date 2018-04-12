#include<stdio.h>
#include<unistd.h> //lseek, STDIN_FILENO
#include<stdlib.h>
#include <fcntl.h>
#define FILE_MODE (S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH)
void err_sys(const char* x) { 
  perror(x); 
  perror("\n"); 
  exit(1); 
}

char buf2[6];
int main(void){
    int fd;
    if ((fd = open("file1.txt", O_RDONLY, FILE_MODE)) < 0) err_sys("creat error");
    if (0==read(fd, buf2, 5)) err_sys("buf2 read error");
		printf("%s\n", buf2);
    exit(0);
}
