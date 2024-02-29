#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// index_list_len은 배열 index_list의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string, int index_list[], size_t index_list_len) {
  
    size_t answer_size = 1;
    char* answer = (char*)malloc(answer_size * sizeof(char));
    answer[0] = '\0'; 
  
    for (size_t i = 0; i < index_list_len; ++i) {

        if (index_list[i] >= 0 && index_list[i] < strlen(my_string)) {
        
            size_t new_size = answer_size + 2; 
            char* new_answer = (char*)realloc(answer, new_size * sizeof(char));
            if (new_answer == NULL) {
               
                free(answer);
                return NULL;
            }
            answer = new_answer;
            answer_size = new_size;
            strncat(answer, &my_string[index_list[i]], 1);
        }
    }
    
    return answer;
}