#include <stdio.h>

void array_iterator(int *array, size_t size, void (*action)(int)) {
    for (size_t i = 0; i < size; i++) {
        action(array[i]);
    }
}

void print_element(int element) {
    printf("%d ", element);
}

void square_element(int element) {
    printf("%d ", element * element);
}

int main() {
    int array[] = {1, 2, 3, 4, 5};
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Printing array elements: ");
    array_iterator(array, size, print_element);
    printf("\n");

    printf("Printing squared array elements: ");
    array_iterator(array, size, square_element);
    printf("\n");

    return 0;
}
