#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if ((a > b && a < c) || (a > c && a < b)) {
        printf("%d\n", a);
    } else if ((b > a && b < c) || (b > c && b < a)) {
        printf("%d\n", b);
    } else if ((c > a && c < b) || (c > b && c < a)) {
        printf("%d\n", c);
    } else {
        if (a == b && b == c) {
            printf("%d=%d=%d\n", a, b, c);
        } else if (a == b && a > c) {
            printf("%d=%d>%d\n", a, b, c);
        } else if (a == b && a < c) {
            printf("%d=%d<%d\n", a, b, c);
        } else if (a == c && a > b) {
            printf("%d=%d>%d\n", a, c, b);
        } else if (a == c && a < b) {
            printf("%d=%d<%d\n", a, c, b);
        } else if (b == c && b > a) {
            printf("%d=%d>%d\n", b, c, a);
        } else if (b == c && b < a) {
            printf("%d=%d<%d\n", b, c, a);
        }
    }
    double x, y;
    scanf("%lf %lf", &x, &y);
    double r = 300.0;

    if ((y > 150 && y < 300 && x*x + y*y < r*r && x<y && -y<x) ||
        (y > -300 && y < 0 && x*x + y*y > r*r && x<300 && -300<x)) {
        printf("inside\n");
    } else {
        printf("outside\n");
    }

    return 0;
}
