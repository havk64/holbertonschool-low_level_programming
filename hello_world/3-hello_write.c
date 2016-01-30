#include <stdio.h>
#include <unistd.h>

int main(void)
{
	const char msg[] = "Hello,C\n";
	write(STDOUT_FILENO, msg, sizeof(msg)-1);
	return (0);
}
