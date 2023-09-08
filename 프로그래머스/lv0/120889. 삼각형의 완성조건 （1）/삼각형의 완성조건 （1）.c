#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// sides_len은 배열 sides의 길이입니다.
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int solution(int sides[], size_t sides_len) {
    if (sides_len != 3) {
        return 2;
    }
    qsort(sides, sides_len, sizeof(int), compare);

    if (sides[0] + sides[1] > sides[2]) {
        return 1; 
    } else {
        return 2; 
    }
}