#include <stdio.h>

int main() {
    int k;
    scanf("%d", &k);

    int a = 1, b = 1;

    for (int i = 1; i <= k; i++) {
        printf("%3d  %d\n", i, a); 
        int temp = a + b;
        a = b;
        b = temp;
    }

    return 0;
}
