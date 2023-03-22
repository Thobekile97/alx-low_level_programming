#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name using a given function
 * @name: the name to be printed
 * @f: a pointer to a function that takes a character pointer as an argument
 *
 * Description: This function takes a name and a function pointer as arguments.
 *              It then calls the function pointer, passing in the name argument.
 *              This is a way to allow the caller to specify how the name should
 *              be printed.
 */
void print_name(char *name, void (*f)(char *))
{
    if (name == NULL || f == NULL)
        return;

    f(name);
}
