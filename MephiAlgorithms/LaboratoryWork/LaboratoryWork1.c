#include <stdio.h>
/*
Write a program that asks the user for two integers and finds the quotient of the integer division of the product of these numbers by their sum.
*/
int main(){
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);
    int kopaytma = a * b;
    int summa = a+b;
    
    if(summa !=0) {
        int natija = kopaytma/summa;
        printf("%d\n", natija );
    } else {
        printf("ZeroDivisionError\n");
    }
    
    return 0;
}
