#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);
    if (number >= 60 || number>=-30 && number <=14) {
        if (number % 5 == 0) {
            printf("multiple\n");
        } else {
            printf("not multiple\n");
        }
    } else {
        printf("excluded\n");
    }

    return 0;
}
