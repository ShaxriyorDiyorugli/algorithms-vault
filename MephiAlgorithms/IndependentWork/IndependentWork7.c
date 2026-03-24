#include <stdio.h>
#include <limits.h>

int main() {
    int arr[40];
    int a;
    int i;

    for (i = 0; i < 40; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &a);
    int sum = 0, cnt = 0;
    for (i = 0; i < 40; i++) {
        if (arr[i] > a) {
            sum += arr[i];
            cnt++;
        }
    }

    if (cnt == 0) {
        return 0;
    }

    double m = (double)sum / cnt;

    /* m dan kichik elementlar uchun */
    int indexSum = 0;
    int maxVal = INT_MIN;
    int maxCount = 0;

    for (i = 0; i < 40; i++) {
        if (arr[i] < m) {
            indexSum += i;

            if (arr[i] > maxVal) {
                maxVal = arr[i];
                maxCount = 1;
            } else if (arr[i] == maxVal) {
                maxCount++;
            }
        }
    }
    printf("%.4f\n", m);
    printf("%d\n", indexSum);
    printf("%d %d\n", maxVal, maxCount);

    return 0;
}
