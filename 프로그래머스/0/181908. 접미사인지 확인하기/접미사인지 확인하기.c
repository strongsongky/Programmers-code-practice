#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* my_string, const char* is_suffix) {
    int my_string_len = strlen(my_string);
    int is_suffix_len = strlen(is_suffix);
    
    if (is_suffix_len > my_string_len) {
        return 0; 
    }

    int start_index = my_string_len - is_suffix_len;

    if (strcmp(&my_string[start_index], is_suffix) == 0) {
        return 1;
    } else {
        return 0;
    }
}
