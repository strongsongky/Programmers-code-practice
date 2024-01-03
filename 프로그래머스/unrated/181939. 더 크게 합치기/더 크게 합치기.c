#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b) {
    int ab = a * pow(10, floor(log10(b) + 1)) + b;
    int ba = b * pow(10, floor(log10(a) + 1)) + a;

    return (ab > ba) ? ab : ba;
}