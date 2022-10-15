#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    print_dog(&my_dog);
    putchar('\n');

    my_dog.name = "Alex";
    my_dog.age = 3.0;
    my_dog.owner = 0;
    print_dog(&my_dog);
    putchar('\n');

    my_dog.name = "Alex";
    my_dog.age = 0;
    my_dog.owner = "Daddy";
    print_dog(&my_dog);
    putchar('\n');

    my_dog.name = 0;
    my_dog.age = 4.6;
    my_dog.name = "Mercy";
    print_dog(&my_dog);
    putchar('\n');

    my_dog.name = NULL;
    my_dog.age = 0;
    my_dog.owner = NULL;
    print_dog(&my_dog);


    return (0);
}
