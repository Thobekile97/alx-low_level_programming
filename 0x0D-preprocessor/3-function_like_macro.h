#include <stdio.h>

#define ABS(x) (((x) < 0) ? -(x) : (x))

int main() {
    int num = -10;
    int absValue = ABS(num);

    printf("Absolute value of %d is %d\n", num, absValue);

    return 0;
}
