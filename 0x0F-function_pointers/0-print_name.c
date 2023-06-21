#include <stdio.h>

void print_name(char *name, void (*f)(char *)) {
    f(name);
}

void print_with_newline(char *name) {
    printf("%s\n", name);
}

int main() {
    char name[] = "John Doe";

    print_name(name, print_with_newline);

    return 0;
}
