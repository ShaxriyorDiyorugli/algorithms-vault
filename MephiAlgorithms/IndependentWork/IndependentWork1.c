#include <stdio.h>

int main() {
    int a;
    if (scanf("%d", &a) != 1) return 0;
    int r1, r2, r3, r4;
    if (scanf("%d %d %d %d", &r1, &r2, &r3, &r4) != 4) return 0;
    
    int b = a % 10;
    int c = (a / 10) % 10;
    int d = (a / 100) % 10;
    int e = a / 1000;
    int f = b + c + d + e;
    printf("%d\n", f);


    int a3 = -(r1 + r2 + r3 + r4);
    int a2 =  (r1*r2 + r1*r3 + r1*r4 + r2*r3 + r2*r4 + r3*r4);
    int a1 = -(r1*r2*r3 + r1*r2*r4 + r1*r3*r4 + r2*r3*r4);
    int a0 =  (r1 * r2 * r3 * r4);

    printf("\n");
    printf("%5d%5d%5d%5d%5d\n", 4, 3, 2, 1, 0);
    printf("%5d%5d%5d%5d%5d\n", 1, a3, a2, a1, a0);

    return 0;
}
