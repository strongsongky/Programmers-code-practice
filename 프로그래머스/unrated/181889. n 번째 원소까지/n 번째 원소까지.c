#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int* solution(int num_list[], size_t num_list_len, int n) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    size_t length = n;
    if (length > num_list_len) {
        length = num_list_len;
    }

    int* answer = (int*)malloc(length * sizeof(int));
 
    for (size_t i = 0; i < length; ++i) {
        answer[i] = num_list[i];
    }

    return answer;
}