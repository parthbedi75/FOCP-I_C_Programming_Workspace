#include <stdio.h>

long long SumSquareSeries(int n) {
    long long sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += (long long)i * i;
    }

    return sum;
}

int main() {
    int n;
    scanf("%d", &n);

    printf("%lld\n", SumSquareSeries(n));

    return 0;
}
