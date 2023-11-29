#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string, int k) {

    size_t str_len = strlen(my_string);
    size_t new_str_len = str_len * k;

    char* answer = (char*)malloc(new_str_len + 1); 
    for (size_t i = 0; i < new_str_len; ++i) {
        answer[i] = my_string[i % str_len];
    }

    answer[new_str_len] = '\0';

    return answer;
}