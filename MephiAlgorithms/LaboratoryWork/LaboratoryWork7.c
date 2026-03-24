#include <stdio.h>
#include <math.h>

int main() {
    double arr[61];      
    double x = -15.0;
    int i;
    for (i = 0; i < 61; i++) {
        arr[i] = 3 * sin(0.7 * x);
        x += 0.5;
    }
    double max = arr[0];
    for (i = 1; i < 61; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    double sum = 0.0;
    int count = 0;
    for (i = 1; i < 61; i += 2) {
        sum += arr[i];
        count++;
    }
    double average = fabs(sum / count);
    printf("%.6f\n", max);
    printf("%.6f\n", average);

    return 0;
}
