#include <stdio.h>

int main(void)
{
	char letter, lett;
	int x, y;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	for (lett = 'A'; lett <= 'Z'; lett++)
		putchar(lett);

	putchar('\n');

	for (x= 97; x <= 122; x++)
		putchar(x);

	for (y = 65; y <= 90; y++)
		putchar(y);

	putchar('\n');

	return (0);
}
