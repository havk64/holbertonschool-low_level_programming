#include <stdio.h>
#include <string.h>
#include <unistd.h>

int string_len(char *s)
{
    int l;

    l = 0;
    while (*s)
    {
	s++;
	l++;
    }
    return (l);
}

/* reverse a string
 * works for any string of size 0 to INT_MAX - 1
 */
void crazy_reverse_string(char *s)
{
    int l;
    int i;
    /* you are not allowed to declare new variables */

    l = string_len(s);
    i = 0;
    while (i < l / 2)
    {
	s[l] = s[i];		/* Using the Null terminator as temp variable.	*/
	s[i] = s[l - i - 1];	/* Assigning the each item to its opposite.	*/
	s[l - i -1 ] = s[l];	/* Retrieving the saved value from the Null.	*/
	s[l] = 0;		/* Reassigning the 0 value to last its place.	*/
	i++;
    }
}

int main(void)
{
    char *s;

    s = strdup("Hello Holberton! \\o/ #cisfun"); /* This is an example, but it should work for any string */
    printf("Before: %s\n", s);
    crazy_reverse_string(s);
    printf("After: %s\n", s);
    printf("\nStarts here:");
    write(1, "Hello World!", (1 << 3) + (1 << 2));
    printf("\n");
    return (0);
}
