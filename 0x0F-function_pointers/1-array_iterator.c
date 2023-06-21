#include <stdio.h>

void array_iterator(int *array, size_t size, void (*action)(int)) {
    for (size_t i = 0; i < size; i++) {
        action(array[i]);
    }
}

void print_elem(int elem) {
    printf("%d ", elem);
}

void print_elem_octal(int elem) {
    printf("0%o ", elem);
}

int main(void) {
    int array[5] = {0, 98, 402, 1024, 4096};
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Printing array elements in decimal: ");
    array_iterator(array, size, print_elem);
    printf("\n");

    printf("Printing array elements in octal: ");
    array_iterator(array, size, print_elem_octal);
    printf("\n");

    return 0;
}
