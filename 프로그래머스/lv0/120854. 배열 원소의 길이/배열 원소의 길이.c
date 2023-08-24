#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(const char* strlist[], size_t strlist_len) {
   
    int* answer = (int*)malloc(1);
    for(int i=0;i<strlist_len;i++){
        answer[i] = strlen(strlist[i]);
    }
    return answer;
}