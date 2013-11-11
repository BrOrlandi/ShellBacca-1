#ifndef STDIO_H
#define STDIO_H
#include <stdio.h>
#endif

#include <termios.h> // bibliotecas para usar o getch() em linux

#ifndef UNISTD_H
#define UNISTD_H
#include <unistd.h>
#endif

#ifndef FCNTL_H
#define FCNTL_H
#include <fcntl.h> // para a kbhit
#endif

int GetChar(void);
int ApertouTecla(void);


