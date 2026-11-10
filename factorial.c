#include <stdio.h>

long long factorial(int x) {
    long long result = 1;

    for (int i = 2; i <= x; i++) {
        result *= i;
    }

    return result;
}

int main() {
    int n;
    scanf("%d", &n);

    printf("%lld\n", factorial(n));

    return 0;
}