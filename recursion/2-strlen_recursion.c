#include <stdio.h>
/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s : the string
 * Return: zero
 */

int _strlen_recursion(char *s);

int main(void)
{
	int n;

	n = _strlen_recursion("Corbin Coleman");
	printf("%d\n", n);
	return (0);
}

int _strlen_recursion(char *s)
{
	int i = 0;

	if(*s[i] == '\0')
		return (*s[i]);
	else
		*s[i];
		_strlen_recursion(i++);
}

