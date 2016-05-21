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
#define BUF 64

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
int strncomp(char *s1, const char *s2, int n);
int runIt(char * c, char * argv[], char *ep[]);
int checkIt(char * argv[], char *ep[]);
int cd(char *argv[]);
int out(char *argv[]);
int help(char *argv[]);
char *getEnv(char * name, char ** env);
void freeMem(char *a[]);
int parseIt( char * env[]);
char *string_copy(char *dest, const char *src);
char *string_ncopy(char *dest, const char *src, int n);
char *nconcat_strings(char *dest, const char *src, int n);
char *commandExist(char * cmd, char ** env);
char *string_concat(char *s1, char *s2);

