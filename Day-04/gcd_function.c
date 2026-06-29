#include <stdio.h>

int gcd(int a, int b) {
    int i, gcd = 1;

    for (i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }

    return gcd;
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("GCD = %d", gcd(num1, num2));

    return 0;
}
