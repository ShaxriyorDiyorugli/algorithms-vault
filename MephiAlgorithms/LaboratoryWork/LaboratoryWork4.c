#include <stdio.h>

int main(void) {
    int i, a, a1, a2, t, sum, r, k, max = 680;
    k = 0; 

    for (i = 680; i <= 710; i++) {
        a = a1 = t = sum = 0;
        for (r = 2; r < i; r++) {
            if (i % r == 0)
                t++; 
        }

        if (i % 680 == 0)
            printf("%d  ", i);
        else
            printf("\n%d  ", i);

        for (a2 = 2; a2 < i; a2++) {
            if (i % a2 == 0) {
                if (sum == 0)
                    a1 = i / a2;
                if (a2 != a1) {
                    printf("%3d,", a2);
                    a += 1;
                    if (a == 4) {
                        a = 0;
                        printf("\n");
                        printf("     ");
                    }
                } else {
                    printf("%3d ", a2);
                    a += 1;
                    sum += 1;
                    break;
                }
                sum += 1;
            }
        }

        if (a == 3)
            printf("%9d", t);
        if (a > 0) {
            for (a2 = 2; a2 <= 4 - a; a2++)
                printf("        ");
        }
        if ((a > 0) && (a != 3))
            printf("%5d", t);
        else if (a == 0)
            printf("%21d", t);
        if ((t >= k) && (t != 0)) {
            k = t;
            if (i > max) {
                max = i;
            }
        }
    }

    printf("\n\n%d\n", max);

    return 0;
}
