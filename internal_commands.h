#ifndef INTERNAL_COMMANDS_H_INCLUDED
#define INTERNAL_COMMANDS_H_INCLUDED

#include "parse.h"
#include "processes_handler.h"

#ifndef STDLIB_H
#define STDLIB_H
#include <stdlib.h>
#endif

#ifndef STDIO_H
#define STDIO_H
#include <stdio.h> // para perror
#endif

#ifndef UNISTD_H
#define UNISTD_H
#include <unistd.h> //para constantes do dup2
#endif

#ifndef MAX_LEN
#define MAX_LEN 1024 //maior tamanho aceito de input
#endif

char internal_command(char* line);//executa comandos internos, se tiver. Retorna 1 se for digitado exit, 2 se for CD, 0 se não for nenhum comando interno
void cd(char* line, int argindex);//comando CD. Esse argindex é simplesmente o começo dos argumentos de CD. Normalmente seria 2(C = 0, D = 1), mas pode ter um monte de espaço antes
void jobs(char* line);//comando jobs

void printaEstado(char status);//função auxiliar de jobs, recebe status e imprime uma string correspondente na saida padrao
void printaID_STATUS_PATH(int id, char* stringID, char status, char* path);//função auxiliar de jobs, recebe os argumentos para imprimir id, status e path
void printaID_PID_STATUS_PATH(int id, pid_t pid, char* stringID, char status, char* path);//função auxiliar de jobs

__attribute__((weak)) int setenv(const char *name, const char *value, int overwrite);
#endif // INTERNAL_COMMANDS_H_INCLUDED