#include <stdio.h>
#include <math.h>

/*
Write a program to find all roots ($x_i$) of the equation: 2x^2 - 5cos(x) + 2 = 0 on the interval x in [-3, 2] using the Bisection Method (Interval Halving Method).
Precision: Determine each root x_i with an absolute error tolerance of 1 times 10^{-10}.
Root Isolation: The localization (separation) of the roots must also be performed by subdividing the original interval into smaller sub-intervals.
*/


double f(double x) {
    return 2*x - 5*cos(x) + 2;
}

int main() {
    double boshlanish = -3.0, tugash = 2.0, aniqlik = 1e-10;
    double x0; /*ekstirimum nuqta*/
    double chap, ong, orta;
    x0 = asin(-0.4);
    if (f(boshlanish) * f(x0) < 0) {
        chap = boshlanish;
        ong = x0;
        while (ong - chap > aniqlik) {
            orta = (chap + ong) / 2.0;
            if (f(chap) * f(orta) < 0)
                ong = orta;
            else
                chap = orta;
        }

        printf("%.10lf\n", (chap + ong) / 2.0);
    }
    if (f(x0) * f(tugash) < 0) {
        chap = x0;
        ong = tugash;
        while (ong - chap > aniqlik) {
            orta = (chap + ong) / 2.0;
            if (f(chap) * f(orta) < 0)
                ong = orta;
            else
                chap = orta;
        }
        printf("%.10lf\n", (chap + ong) / 2.0);
    }
    return 0;
}
