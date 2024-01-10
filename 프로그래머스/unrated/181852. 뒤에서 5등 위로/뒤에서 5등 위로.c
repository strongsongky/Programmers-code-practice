#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int compare(const int* p1, const int* p2) {
    return *p1 - *p2;
}

// num_list_len은 배열 num_list의 길이입니다.
int* solution(int numList[], size_t numListLen) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int) * (numListLen - 5));
    qsort(numList, numListLen, sizeof(int), compare);
    memcpy(answer, numList + 5, sizeof(int) * (numListLen - 5));
    return answer;
}