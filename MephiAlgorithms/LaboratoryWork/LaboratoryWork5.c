#include <stdio.h>
#include <math.h>

/*
Task:
Write a program that calculates the sum N=1 to N, S = sqrt((2n+3)/(n+4)) integer values of N in the range from 20,000,000 to 200,000,000 (with a step of 20,000,000, including the boundaries).
The sum should be calculated using two methods:

   1. Direct summation (without correction).
   2. Kahan summation algorithm (with compensation/correction).

Use the double data type for floating-point variables.
Display a comparison table on the screen containing the following columns:

* The value of N;
* The sum calculated directly (without correction);
* The sum calculated with correction (Kahan method);
* The difference between the direct sum and the Kahan sum.
*/

int main() {
    double sum_direct = 0.0, sum_kahan = 0.0;
    double natija, y, t, c = 0.0;
    double diff;
    long n;

    for (n = 1; n <= 200000000; n++) {

        natija = sqrt((3.0 + 2.0 * n) / (4.0 + n));

        sum_direct += natija;
        y = natija - c;
        t = sum_kahan + y;
        c = (t - sum_kahan) - y;
        sum_kahan = t;
        if (n % 20000000 == 0) {
            diff = sum_direct - sum_kahan;
            printf("%9ld%18.4f%18.4f%10.4f\n",
                   n, sum_direct, sum_kahan, diff);
        }
    }

    return 0;
}
