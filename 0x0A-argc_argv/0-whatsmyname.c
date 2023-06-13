=#include <stdio.h>
#include <string.h>

/**
 * @brief Extracts the program name from the full path.
 * @param argc Number of arguments.
 * @param argv Array of command-line arguments.
 * @return 0 on successful execution.
 */
int main(int argc, char *argv[]) {
    // Extract program name from the full path
    char *program_name = strrchr(argv[0], '/');

    if (program_name == NULL)
        program_name = argv[0];
    else
        program_name++;

    // Print the program name
    printf("%s\n", program_name);

    return 0;
}
