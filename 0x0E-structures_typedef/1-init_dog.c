#include <stdio.h>

struct dog {
    char *name;
    float age;
    char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner) {
    d->name = name;
    d->age = age;
    d->owner = owner;
}

int main() {
    struct dog myDog;
    char *name = "Max";
    float age = 4.5;
    char *owner = "John Doe";

    init_dog(&myDog, name, age, owner);

    printf("Dog's Name: %s\n", myDog.name);
    printf("Dog's Age: %.1f\n", myDog.age);
    printf("Dog's Owner: %s\n", myDog.owner);

    return 0;
}
