#include <stdio.h>

int main() {
    int a = 10;
    int b = 5;
    int c = a + b;
    printf("The value of a is %d and the value of b is %d and sum is %d", a, b, c);
    // Modulus operator is used to get the remainder
    printf("The remainder when %d is divided by b is: %d", a%b);
    return 0;
}