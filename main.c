#include "isEven.h"
#include "isOdd.h"
#include <stdio.h>

int main() {
    int num, a, b;
    printf("Enter an integer: ");
    scanf("%d", &num);
    a = isEven(num);
    b = isOdd(num);
    printf("Is Even: %d\nIs Odd: %d\n", a, b);
    return 0;
}
