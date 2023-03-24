#include <stdio.h>
#include "variadic_functions.h"
int main(void)
{
int sum;
sum = sum_them_all(3, 1, 2, 3);
printf("The sum is: %d\n", sum);
return 0;
}
