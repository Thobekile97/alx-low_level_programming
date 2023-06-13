#include <stdio.h>
#include "main.h"

/**
 * main - (int argc, char *argv[]
 * @argc: Number of arguemnts
 * @argv: An array containing the program command line arguements
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[]) {
	//Extract program name from the full path
	char *program_name = strrchr(argv[0], '/');

	if (program_name == NULL)
	    program_name = argv[0]

        else program_name++;

	//print the program name
	printf("%s\n", program_name);

	return 0

}
