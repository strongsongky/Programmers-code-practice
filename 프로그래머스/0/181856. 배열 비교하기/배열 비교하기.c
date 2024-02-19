#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr1_len은 배열 arr1의 길이입니다.
// arr2_len은 배열 arr2의 길이입니다.
int solution(int arr1[], size_t arr1_len, int arr2[], size_t arr2_len) {

    if (arr1_len != arr2_len) {
        return arr1_len > arr2_len ? 1 : -1;
    }
    
    int sum1 = 0, sum2 = 0;
    for (size_t i = 0; i < arr1_len; i++) {
        sum1 += arr1[i];
        sum2 += arr2[i];
    }
    
    if (sum1 != sum2) {
        return sum1 > sum2 ? 1 : -1;
    }
    
    return 0;
}