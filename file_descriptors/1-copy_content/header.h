#include <fcntl.h>
#include <unistd.h>
#define BUF_SIZE 8192

int copyFile(int src, int dest, char buffer[]);
