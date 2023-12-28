#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int n) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    if (n == 0) {
        char* zeroStr = (char*)malloc(2);
        zeroStr[0] = '0';
        zeroStr[1] = '\0';
        return zeroStr;
    }

    int len = snprintf(NULL, 0, "%d", n);

    char* answer = (char*)malloc(len + 1);
    if (answer == NULL) {
        return NULL;
    }

    snprintf(answer, len + 1, "%d", n);

    return answer;
}