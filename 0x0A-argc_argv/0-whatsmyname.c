#include <stdio.h>
#include "main.h"

/**
 * main - (int argc, char *argv[]) {
 * @argc: The number of command line arguments
 * @argv: An array containing the program command line arguements
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return 0;
