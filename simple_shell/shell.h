#include <stdio.h>	/* For perror */
#include <unistd.h>	/* For chdir, fork, stat, close, read, write, execve, access */
#include <fcntl.h>	/* For open */
#include <sys/stat.h>	/* For stat, open */
#include <sys/types.h>	/* For opendir, closedir, stat, open, wait, kill */
#include <dirent.h>	/* For opendir, readdir, closedir */
#include <stdlib.h>	/* For malloc, free, exit */
#include <sys/wait.h>	/* For wait */
#include <signal.h>	/* For signal, kill */
#include <errno.h>	/* For *sys_errlist[](perror helper) */

#define BUF_SIZE 8192
#ifndef _LIBSHELL_H_	/* For Static Library */
#define _LIBSHELL_H_

char **string_split(const char *str, char separator);
char *read_line(const int fd);

#endif

int print_char(char c);
int len(char *s);
void prompt(void);
void print(char *s);
int welcome();
int strcomp(char *s1, const char *s2);
