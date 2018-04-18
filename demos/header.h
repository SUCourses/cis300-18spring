#if !defined(HEADER_H)
#define HEADER_H
#include<stdio.h>
#include<unistd.h> //lseek, STDIN_FILENO
#include<stdlib.h>
#include <fcntl.h>
#define FILE_MODE (S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH)

void err_sys(const char* x);
int my_strlen(char* format_string);
void my_echo(int fd, char* str);
void my_printf(char* format_string);

#endif


