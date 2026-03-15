#include <stdio.h>

int main() {
    int m;
    scanf("%d", &m);
    long long sum = 0;
    int k = 0;
    while (sum <= m) {
        k++;
        sum += (long long)k * k;
    }
    printf("%d\n\n", k);
    for (int i = 100; i <= 120; i++) {
        long long s = (long long)i * (i + 1) * (2 * i + 1) / 6; 
        printf("%d  %lld\n", i, s);
    }

    return 0;
}
