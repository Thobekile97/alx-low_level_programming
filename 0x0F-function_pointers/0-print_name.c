#include <stdio.h>

void print_name(char *name, void (*f)(char *)) {
    f(name);
}

void print_with_newline(char *name) {
    printf("%s\n", name);
}

void print_with_exclamation(char *name) {
    printf("%s!\n", name);
}

int main() {
    char name[] = "John Doe";

    printf("Printing name with newline:\n");
    print_name(name, print_with_newline);

    printf("\nPrinting name with exclamation:\n");
    print_name(name, print_with_exclamation);

    return 0;
}
