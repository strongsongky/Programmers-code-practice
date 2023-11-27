#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int start, int end_num) {
    int length = start - end_num + 1;
    int* answer = (int*)malloc(length * sizeof(int));
    
    if (answer == NULL) {
        return NULL;
    }
    
    for (int i = 0; i < length; i++) {
        answer[i] = start - i;
    }

    return answer;
}