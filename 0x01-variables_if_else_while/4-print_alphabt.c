#include <stdio.h>
/**
 * man - entry point
 *
 * Description: Print lowercase alphabet excluding e and q
 * Return: 0
 */
int main(void)
{
char c;

for (c = 'a'; c <= 'z'; ++c)
{
if (c != 'e' && c != 'q')
putchat(c);
}

putchar('\n');

return (0);
}
