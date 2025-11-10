#include <stdio.h>
int main() {
    int a, b, mod;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    mod = a % b;
    printf("Remainder = %d", mod);
    return 0;
}