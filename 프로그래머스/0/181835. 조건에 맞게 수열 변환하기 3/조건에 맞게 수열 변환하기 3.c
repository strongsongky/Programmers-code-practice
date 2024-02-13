#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
int* solution(int arr[], size_t arr_len, int k) {
    int* answer = (int*)malloc(arr_len * sizeof(int));
    
    for (size_t i = 0; i < arr_len; i++) {
        if (k % 2 == 1) {
            answer[i] = arr[i] * k;
        } else {
            answer[i] = arr[i] + k;
        }
    }
    return answer;
}