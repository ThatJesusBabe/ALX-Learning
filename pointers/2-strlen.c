#include "main.h"

/**
 * _strlen - program that returns the lenght of a string
 * @s : string to be counted.
 * Return: len
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;

	return (length);
}
