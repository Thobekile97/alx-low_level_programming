#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct dog {
    char *name;
    float age;
    char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner) {
    d->name = malloc(strlen(name) + 1);
    strcpy(d->name, name);
    d->age = age;
    d->owner = malloc(strlen(owner) + 1);
    strcpy(d->owner, owner);
}

void free_dog(struct dog *d) {
    free(d->name);
    free(d->owner);
}

int main() {
    struct dog myDog;
    char *name = "Buddy";
    float age = 2.5;
    char *owner = "Jane Smith";

    init_dog(&myDog, name, age, owner);

    printf("Dog's Name: %s\n", myDog.name);
    printf("Dog's Age: %.1f\n", myDog.age);
    printf("Dog's Owner: %s\n", myDog.owner);

    free_dog(&myDog);

    return 0;
}
