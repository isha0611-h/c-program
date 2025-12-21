#include <stdio.h>

int getQuotient(int a, int b) {
    return a / b;
}

int getRemainder(int a, int b) {
    return a % b;
}

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int q = getQuotient(a, b);
    int r = getRemainder(a, b);

    printf("Quotient = %d\n", q);
    printf("Remainder = %d\n", r);

    return 0;
}