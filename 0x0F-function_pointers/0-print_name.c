#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name.
 * @name: The name to be printed.
 * @f: A pointer to a function that prints a name.
 */
void print_name_as_is(char *name)
{
	    printf("Hello, my name is %s\n", name);
}
int main(void)
{
	     printf("Bob", print_name_as_is);
	     return (0);
}
