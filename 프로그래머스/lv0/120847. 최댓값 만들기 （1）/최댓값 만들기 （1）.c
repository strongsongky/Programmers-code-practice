#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)b - *(int *)a);
}

int solution(int numbers[], int numbers_len) {
    qsort(numbers, numbers_len, sizeof(int), compare);
    int answer = numbers[0] * numbers[1];
    return answer;
}

int main() {
    int numbers[] = {2, 4, 6, 8, 10};
    int numbers_len = sizeof(numbers) / sizeof(numbers[0]);
    
    int result = solution(numbers, numbers_len);
    
    return 0;
}