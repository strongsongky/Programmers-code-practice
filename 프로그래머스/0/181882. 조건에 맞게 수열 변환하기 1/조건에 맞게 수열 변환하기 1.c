#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int arr[], size_t arr_len) {
    int* answer = (int*)malloc(arr_len * sizeof(int));
    
    if (answer == NULL) {
        return NULL;
    }
    
    for (size_t i = 0; i < arr_len; i++) {
        if (arr[i] >= 50 && arr[i] % 2 == 0) {
            answer[i] = arr[i] / 2;
        } else if (arr[i] < 50 && arr[i] % 2 != 0) {
            answer[i] = arr[i] * 2;
        } else {
            answer[i] = arr[i];
        }
    }
    
    return answer;
}