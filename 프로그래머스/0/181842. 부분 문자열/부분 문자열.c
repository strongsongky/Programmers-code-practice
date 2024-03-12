#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* str1, const char* str2) {
    int str1_len = strlen(str1);
    int str2_len = strlen(str2);

    for (int i = 0; i <= str2_len - str1_len; i++) {
        bool found = true;
        for (int j = 0; j < str1_len; j++) {
            if (str1[j] != str2[i + j]) {
                found = false;
                break;
            }
        }
        if (found) {
            return 1;
        }
    }
    return 0;
}