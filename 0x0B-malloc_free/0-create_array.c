#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c) {
    if (size == 0) {
        return NULL;  // Return NULL if size = 0
    }
    
    char *array = (char *)malloc(size * sizeof(char));  // Allocate memory for the array
    
    if (array == NULL) {
        return NULL;  // Return NULL if memory allocation fails
    }
    
    for (unsigned int i = 0; i < size; i++) {
        array[i] = c;  // Initialize each element with the specified char
    }
    
    return array;  // Return a pointer to the array
}

int main() {
    unsigned int size = 10;
    char c = 'A';
    
    char *array = create_array(size, c);
    
    if (array == NULL) {
        printf("Failed to create the array.\n");
    } else {
        printf("Array created successfully:\n");
        for (unsigned int i = 0; i < size; i++) {
            printf("%c ", array[i]);
        }
        printf("\n");
        
        free(array);  // Remember to free the allocated memory
    }
    
    return 0;
}
