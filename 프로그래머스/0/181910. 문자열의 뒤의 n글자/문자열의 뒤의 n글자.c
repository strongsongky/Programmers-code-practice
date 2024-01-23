#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string, int n) {
    size_t str_len = strlen(my_string);
    size_t answer_len = n;

    char* answer = (char*)malloc((answer_len + 1) * sizeof(char));

    for (size_t i = 0; i < answer_len; i++) {
        answer[i] = my_string[str_len - n + i];
    }
    answer[answer_len] = '\0';

    return answer;
}