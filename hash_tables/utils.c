#include "header.h"
int compare(const char *a, const char *b)
{
	while (*a == *b)
	{
		if (*a == '\0' && *b == '\0')
			return (0);
		a++; b++;
	}
	return (*(const unsigned char *)a - *(const unsigned char *)b);
}
