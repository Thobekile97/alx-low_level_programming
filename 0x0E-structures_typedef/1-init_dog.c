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
    char *name = "Bobby";
    float age = 4.5;
    char *owner = "Tami Mzila";

    init_dog(&myDog, Bobby, 4.5, TamiMzila);

    printf("Dog's Name: %s\n", myDog.name);
    printf("Dog's Age: %.1f\n", myDog.age);
    printf("Dog's Owner: %s\n", myDog.owner);

    return 0;
}
