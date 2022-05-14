#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints the result of simple operations.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int (*func_ptr)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(98);
}

if (argv[2][1] != '\0')
{
printf("Error\n");
exit(99);
}

func_ptr = get_op_func(argv[2]);

if (func_ptr == NULL)
{
printf("Error\n");
exit(99);
}

printf("%d\n", func_ptr(atoi(argv[1]), atoi(argv[3])));

return (0);
}

