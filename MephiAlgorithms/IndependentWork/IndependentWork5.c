#include <stdio.h>
#include <math.h>

int main() {
    double true_value = 2 * log(2.0) - 1; 
    double sum_series = 0.0;              
    double term, abs_error;              
    double eps = 1e-8;                     
    int n = 0;

    do {
        n++;
        term = pow(-1, n + 1) / (n * (n + 1.0));
        sum_series += term;
        abs_error = fabs(true_value - sum_series);
    } while (abs_error > eps);

    printf("%.8f\n", true_value);    
    printf("%.8f\n", sum_series);     
    printf("%.8f\n", abs_error);     
    printf("%d\n", n);                

    return 0;
}
