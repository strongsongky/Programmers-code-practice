#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int concatenate(int a, int b) {
    int temp = b;
    while (temp > 0) {
        a *= 10;
        temp /= 10;
    }
    return a + b;
}

int solution(int a, int b) {
    int result_ab = concatenate(a, b);

    int result_2ab = 2 * a * b;

    if (result_ab >= result_2ab) {
        return result_ab;
    } else {
        return result_2ab;
    }
}